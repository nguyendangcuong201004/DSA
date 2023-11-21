#include <bits/stdc++.h>
using namespace std;

int main(){
    string s; cin >> s;
    stack<int> st;
    for (int x : s){
        if (isdigit(x)){
            st.push(x - '0');
        }
        else {
            int t1 = st.top(); st.pop();
            int t2 = st.top(); st.pop();
            int t;
            if (x == '+') t = t1 + t2;
            else if (x == '-') t = t2 - t1;
            else if (x == '*') t = t1 *t2;
            else if (x == '/') t = t2 / t1;
            st.push(t);
        }
    }
    cout << st.top() << endl;
}
