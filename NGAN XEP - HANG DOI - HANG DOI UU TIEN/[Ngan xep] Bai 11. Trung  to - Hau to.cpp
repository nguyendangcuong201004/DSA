#include <bits/stdc++.h>

using namespace std;

int pre (char x) {
    if (x == '+' || x == '-') return 1;
    if (x == '*' || x == '/') return 2;
    return 0;
}

void solve(string s) {
    stack <char> st;
    string res = "";
    for (char x : s) {
        if (x == '(') {
            st.push(x);
        }
        else if (isalpha(x)) {
            res += x;
        }
        else if (x == ')'){
            while (st.top() != '(') {
                res += st.top();
                st.pop();
            }
            st.pop();
        }
        else {
            while (!st.empty() && pre(st.top()) >= pre(x)) {
                res += st.top();
                st.pop();
            }
            st.push(x);
        }
    }
    while (!st.empty()) {
        res += st.top();
        st.pop();
    }
    cout << res << endl;
}

int main() {
    string s; cin >> s;
    solve(s);
}
