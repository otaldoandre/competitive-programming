#include <iostream>
using namespace std;
#include <vector>
int main() {
    int n_orders;
    int max_n_pizzas;



    while (cin >> n_orders && n_orders != 0) {
        cin >> max_n_pizzas;
        vector<int> tempo(n_orders+1);
        vector<int> pizzas(n_orders+1);
        int t = 0;
        int p = 0;
        for (int n = 1; n <= n_orders; n++) {
            cin >> t;
            cin >> p;
            tempo[n] = t;
            pizzas[n] = p;
        }

        vector<vector<int>> dp(
            n_orders+1,
            vector<int>(max_n_pizzas+1, 0)
        );

        for (int i = 1; i <= n_orders; i++) {
            for (int j = 0; j <= max_n_pizzas; j++) {
                dp[i][j] = dp[i-1][j];

                if (pizzas[i] <= j) {
                    dp[i][j] = max(dp[i][j],
                        tempo[i]+ dp[i-1][j-pizzas[i]]);
                }
            }
        }
        int max_value = dp[n_orders][max_n_pizzas];
        cout << max_value << " min." << endl;

    }
    return 0;
}