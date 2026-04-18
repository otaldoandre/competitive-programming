#include <iostream>
#include <vector>
#include <algorithm>
#include <stack>
#include <cctype>
#include <iostream>
#include <stack>

#include <string>

using namespace std;


void printState(char c, stack<char> s, string output) {
    cout << "char: " << c << " | pilha: ";
    if (s.empty()) {
        cout << "-";
    } else {
        stack<char> temp = s;
        string pilhaStr;
        while (!temp.empty()) {
            pilhaStr = temp.top() + pilhaStr;
            temp.pop();
        }
        cout << pilhaStr;
    }
    cout << " | saída: " << output << endl;
}



int precedence(char op) {
    if (op == '^') return 3;
    if (op == '*' || op == '/') return 2;
    if (op == '+' || op == '-') return 1;
    return 0;
}

int main() {
    int cases;
    cin >> cases;
    cin.ignore();

    vector<char> op = {'+', '-', '*', '/', '^'};

    for (int i = 0; i < cases; i++) {
        string expression;
        getline(cin, expression);

        stack<char> s;
        string output;

        for (char c : expression) {
            if (find(op.begin(), op.end(), c) != op.end()) {
                while (!s.empty() &&
                       find(op.begin(), op.end(), s.top()) != op.end() &&
                       ((c != '^' && precedence(s.top()) >= precedence(c)) ||
                        (c == '^' && precedence(s.top()) > precedence(c)))) {
                    output.push_back(s.top());
                    s.pop();
                        }
                s.push(c);
            }
            else if (c == '(') {
                s.push(c);
            }
            else if (c == ')') {
                while (!s.empty() && s.top() != '(') {
                    output.push_back(s.top());
                    s.pop();
                }
                if (!s.empty() && s.top() == '(') {
                    s.pop();
                }
            }
            else {
                output.push_back(c);
            }
        }

        while (!s.empty()) {
            if (s.top() != '(') output.push_back(s.top());
            s.pop();
        }

        cout << output << "\n";
    }

    return 0;
}