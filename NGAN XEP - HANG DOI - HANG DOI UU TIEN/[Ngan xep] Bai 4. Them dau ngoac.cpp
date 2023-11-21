#include <bits/stdc++.h>

using namespace std;

int solve(string s) {
    int res = 0;
    stack <char> st;
    for (char x : s) {
        if (x == '('){
            st.push(x);
        }
        else {
            if (!st.empty()) {
                st.pop();
            }
            else {
                res++;
            }
        }
    }
    return res + st.size();
}

int main() {
    string s; cin >> s;
    cout << solve(s) << endl;
}
