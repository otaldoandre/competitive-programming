#include <iostream>
using namespace std;
#include <vector>
#include <cstdint>

int main() {
    int T = 0;
    int N = 0;
    int M = 0;


    int b = 0;;

    cin >> T;

    for (int i = 0; i < T; i++) {
        cin >> N;
        cin >> M;
        vector<int> blocks(N);

        for (int j = 0; j < N; j++) {
            cin >> b;
            blocks[j] = b;

        }
        // valor grande = infinito
        vector<int> dp(M + 1, 100000000);
        // O valor de 0 é sempre 0. Com 0 moedas se constroe 0 moedas
        dp[0] = 0;
        // Loop para passar por todos valores de blocos
        for (int x = 0; x < N; x++) {
            // Para cada valor de bloco, a partir do primeiro bloco, até o valor total a ser alcançado,
            // verifique se a quantidade de blocos usada atualmente é menor que a quantidade de blocos anteriores

            // Exemplo: blocos tamanho {5, 10, 15} e M = 10
            // O loop vai de 5 até 10, x atual é 0
            // Dp[5] é igual infinito, e blocks[0] é igual a 5 e y = 5
            // dp[y (ou seja, 5)] é igual a infinito e dp 0 é igual a 0 + 1, 1 leva. dp[5] se torna 1
            // d[6], e y é igual a 6. 6 não é calculave então dp[6] fica infinito
            // faz isso até y chegar no 10
            // dp[10] = min (infinito, 1 + 1 (valor de dp[10-5]). dp[10] é igual a 2
            // Dp[10] só sera igual a 1 quando o loop de x ir para 1, ou seja, o valor da moeda a se comparar seja 10
            for (int y = blocks[x]; y <= M; y++) {
                dp[y] = min(dp[y], 1+ dp[y - blocks[x]]);
            }
        }

        if (dp[M] != 100000000) {
            cout << dp[M]<< endl;
        }else {
            cout << -1 << endl;
        }
        dp.clear();
        blocks.clear();

    }


    return 0;
}