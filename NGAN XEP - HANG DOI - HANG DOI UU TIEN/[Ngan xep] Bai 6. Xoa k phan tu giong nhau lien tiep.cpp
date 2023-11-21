#include <bits/stdc++.h>

using namespace std;


int main() {
    string s;
    int k; cin >> s >> k;
    stack <pair<char,int>> st;
    for (char x : s) {
        if (st.empty()) {
            st.push({x, 1});
        }
        else {
            pair<char, int> tmp = st.top();
            if (tmp.first != x) {
                st.push({x, 1});
            }
            else if (tmp.first == x && tmp.second == k - 1) {
                st.pop();;
            }
            else {
                st.top().second += 1;
            }
        }
    }
    string res = "";
    while (!st.empty()) {
        for (int i = 1; i <= st.top().second; i++) {
            res.push_back(st.top().first);
        }
        st.pop();
    }
    reverse(res.begin(), res.end());
    cout << res << endl;
}
