#include <iostream>
using namespace std;


unsigned int _1 (unsigned int num);

int main() {
    //::cout << "Hello, World!" << std::endl;
    unsigned int n;
    unsigned coin_qt = 0;

    cin >> n;

    cout << n << "\n";


    if (n >=100) {
        coin_qt = n / 100;
        n = n % 100;

    }
    cout << coin_qt <<  " nota(s) de R$ 100,00\n";
    coin_qt = 0;

    if (n >=50) {
        coin_qt = n / 50;
        n = n % 50;

    }
    cout << coin_qt <<  " nota(s) de R$ 50,00\n";
    coin_qt = 0;

    if (n >=20) {
        coin_qt = n / 20;
        n = n % 20;
    }
    cout << coin_qt <<  " nota(s) de R$ 20,00\n";
    coin_qt = 0;

    if (n >=10) {
        coin_qt = n / 10;
        n = n % 10;

    }
    cout << coin_qt <<  " nota(s) de R$ 10,00\n";
    coin_qt = 0;

    if (n >=5) {
        coin_qt = n / 5;
        n = n % 5;

    }
    cout << coin_qt <<  " nota(s) de R$ 5,00\n";
    coin_qt = 0;

    if (n >=2) {
        coin_qt = n / 2;
        n = n % 2;

    }
    cout << coin_qt <<  " nota(s) de R$ 2,00\n";
    coin_qt = 0;

    if (n >=1) {
        coin_qt = n / 1;
        n = n % 1;

    }
    cout << coin_qt <<  " nota(s) de R$ 1,00\n";
    coin_qt = 0;

    return 0;
}