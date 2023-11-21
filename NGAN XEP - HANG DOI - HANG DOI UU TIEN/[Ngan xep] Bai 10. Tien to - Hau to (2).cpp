#include <bits/stdc++.h>

using namespace std;

int main () {
    string s; cin >> s;
    stack<string> st;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isalpha(s[i])) {
            st.push(string(1, s[i]));
        }
        else {
            string t1 = st.top(); st.pop();
            string t2 = st.top(); st.pop();
            string t = t1 + t2 + s[i];
            st.push(t);
        }
    }
    cout << st.top() << endl;
}
