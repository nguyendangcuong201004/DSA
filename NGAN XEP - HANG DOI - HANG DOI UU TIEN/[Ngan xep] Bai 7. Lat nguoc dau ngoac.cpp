#include <bits/stdc++.h>

using namespace std;


int main() {
    string s; cin >> s;
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
                st.push('(');
            }
        }
    }
    cout << res + st.size() / 2 << endl;
}
