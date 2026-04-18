#include <iostream>
#include <algorithm>
#include <vector>
#include <sstream>
using namespace std;


int main() {
    int test_cases;
    string phrase;
    string word;
    vector<string> separated_words;
    vector<string> ordered_no_repetition_v;

    // Input
    cin >> test_cases;
    cin.ignore();

    for (int i = 0; i < test_cases; i++) {
        getline(cin, phrase);
        istringstream iss(phrase);
        while (iss >> word) {
            separated_words.push_back(word);
        }

        // Novo vector com todos elementos não repetidos
        for (string w : separated_words) {
            if (find(ordered_no_repetition_v.begin(), ordered_no_repetition_v.end(), w ) == ordered_no_repetition_v.end()) {
                ordered_no_repetition_v.push_back(w);
            }
        }

        // Ordenar
        sort(ordered_no_repetition_v.begin(), ordered_no_repetition_v.end());

        // Imprimir resultados
        for (int i = 0; i < ordered_no_repetition_v.size();i++) {
            if (i > 0) cout << ' ';
            cout << ordered_no_repetition_v[i];
        }

        cout << '\n';
        ordered_no_repetition_v.clear();
        separated_words.clear();

    }

    return 0;
}