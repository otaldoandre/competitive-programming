#include <iostream>
#include <set>
using namespace std;

int main() {

    //Variaveis
    multiset<int, greater<int>> odd_n;
    multiset<int> even_n;

    int curr_num;
    int n;

    // Input
    cin >> n;
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cin >> curr_num;
        if (curr_num % 2 == 0) {
            even_n.insert(curr_num);
        }else {
            odd_n.insert(curr_num);
        }
    }



    // Processamento
    for (int e : even_n) {
        cout << e;
        cout << '\n';
    }

    for (int o : odd_n) {
        cout << o;
        cout << '\n';
    }


    // Saida


    return 0;
}

