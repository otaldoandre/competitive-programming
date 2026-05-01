#include <iostream>
using namespace std;
#include <vector>
#include <cstdint>

int64_t fibo (int64_t m, vector<int64_t>& mem);

int main() {
    unsigned int n;
    unsigned int f;
    vector<int64_t> memo(61, -1);
    int64_t r = 0;


    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> f;
        r = fibo(f, memo);
        cout << "Fib(" << f << ") = " << r << endl;
    }
    return 0;
}

int64_t fibo (int64_t m, vector<int64_t>& mem) {
    if (m <= 1) {
        mem[m] = m;
        return m;
    }
    if (mem[m] != -1) return mem[m];

    mem[m] = fibo (m - 1, mem) + fibo (m - 2, mem);
    return mem[m];
}