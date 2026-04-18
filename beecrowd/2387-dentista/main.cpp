#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;


int main() {

    unsigned int N;
    unsigned int x, y;
    unsigned consultas_atendidas = 0;

    cin >> N;
    cin.ignore();

    pair<int, int> consultas[10000];

    for (int i = 0; i < N; i++) {
        int x, y;
        cin >> x >> y;
        consultas[i].first = y;
        consultas[i].second = x;
    }


    sort(consultas, consultas + N);
    int fim_ultima_consulta = -1;

    for (unsigned int i = 0; i < N; i++) {
        if (consultas[i].second >= fim_ultima_consulta) {
            consultas_atendidas++;
            fim_ultima_consulta = consultas[i].first;
        }
    }
    cout << consultas_atendidas << endl;
    return 0;
}