#include <bits/stdc++.h>

using namespace std;

// ((x + y))

// truong hop du (x) -> ) - ( = 2 -> stack luu chi so // 

bool check (string s){
    stack <int> st;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '('){
            st.push(i);
        }
        else if (s[i] == ')'){
            int j = st.top();
            if (j - i == 2) {
                return true;
            }
            if (s[j + 1] == '(' && s[i - 1] == ')'){
                return true;
            }
            st.pop();;
        }
    }
    return false;
}

int main() {
    string s; cin >> s;
    if (check (s)) {
        cout << "YES\n";
    }
    else cout << "NO\n";
}
