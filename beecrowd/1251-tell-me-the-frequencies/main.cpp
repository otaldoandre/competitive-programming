#include <iostream>
#include <vector>
using namespace std;
#include <algorithm>
#include <map>
int main() {


    string linha;
    int qtd;
    map <char, int, greater<char>> freq;
    bool primeiro = true;
    while (getline(cin, linha)) {
        for (char w : linha) {
            //cout << "Foii";
            if (freq.count(w) ==0 ) {

                qtd = count(linha.begin(), linha.end(), w);
                freq[w] = qtd;
            }

            qtd = 0;
        }
        vector<pair<int,int>> vec(freq.begin(), freq.end());
        sort(vec.begin(), vec.end(), [](const auto& a, const auto& b) {
            if (a.second != b.second) return a.second < b.second;
            return a.first >b.first;
        });

        if (!primeiro) cout << "\n";
        primeiro = false;
        for (auto p : vec) {
            cout << (int)p.first << " " << p.second << "\n";
        }
        freq.clear();
        //cout << '\n';
    }


    return 0;
}