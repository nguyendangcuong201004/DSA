#include <bits/stdc++.h>

using namespace std;

bool valid (char x, char y) {
    if (x == '(' && y == ')' || x == '[' && y == ']'|| x == '{' && y == '}') {
        return true;
    }
    return false;
}

bool check (string s) {
    stack<char> st;
    for (char c : s) {
        if (c == '(' || c == '[' || c == '{') {
            st.push(c);
        }
        else {
            if (st.empty()) {
                return false;
            }
            char y = st.top();
            st.pop();
            if (!valid(y, c)) {
                return false;
            }
        }
    }
    if (st.empty()) {
        return true;
    }
    return false;
}

int main () {
    string s; cin >> s;
    if (check(s)) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}
