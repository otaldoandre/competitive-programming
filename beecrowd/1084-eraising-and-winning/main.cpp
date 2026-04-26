#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;


int main() {
    int n;
    int d;
    string s_number;

    int removals = 0;


    while (cin >> n >> d && (n || d)) {
        string s = "";
        removals = d;
        cin >> s_number;
        //string s_number = to_string(number);

        for (int i = 0; i < s_number.size(); i++) {
            char digit = s_number[i];
            //cout << digit << endl;
            while (!s.empty() && removals > 0 && s.back() < digit) {
                s.pop_back();
                removals--;
            }
            s += digit;
            //cout << s << endl;

        }

        s = s.substr(0, s.size() - removals);
        //cout<< "Fui" << endl;
        cout << s << "\n";

        s = {};
    }

    return 0;
}

