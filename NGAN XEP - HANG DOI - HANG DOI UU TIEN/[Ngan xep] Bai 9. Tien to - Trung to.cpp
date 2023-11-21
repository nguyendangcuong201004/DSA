#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isalpha(s[i])) {
            string tmp = "";
            tmp.push_back(s[i]);
            st.push(tmp);
        }
        else {
            if (st.size() >= 2) {
                string dau = "";
                dau.push_back(s[i]);
                string t1 = st.top();
                st.pop();
                string t2 = st.top();
                st.pop();
                string res = "(" + t1  + dau + t2 + ")";
                st.push(res);
            }
        }
    }
    cout << st.top() << endl;
}
