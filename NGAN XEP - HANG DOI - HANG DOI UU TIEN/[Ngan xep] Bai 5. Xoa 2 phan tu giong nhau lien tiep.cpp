#include <bits/stdc++.h>

using namespace std;


int main() {
    string s; cin >> s;
    stack <char> st;
    for (char x : s){
        if (!st.empty() && st.top() == x) {
            st.pop();
        }
        else st.push(x);
    }
    string res = "";
    while (!st.empty()) {
        res.push_back(st.top());
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}
