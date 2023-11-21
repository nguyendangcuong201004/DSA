#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack<int> st;
    int res = 0;
    for (int i = s.length() - 1; i >= 0; i--){
        if (isdigit(s[i])){
            st.push(s[i] - '0');
        }
        else {
            int t1 = st.top(); st.pop();
            int t2 = st.top(); st.pop();
            int t;
            if (s[i] == '+'){
                t = t1 + t2;
            }
            else if (s[i] == '-'){
                t = t1 - t2;
            }
            else if (s[i] == '*'){
                t = t1 * t2;
            }
            else t = t1 / t2;
            st.push(t);
        }
    }
    cout << st.top() << endl;
}
