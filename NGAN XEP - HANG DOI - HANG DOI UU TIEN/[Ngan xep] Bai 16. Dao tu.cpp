#include <bits/stdc++.h>
using namespace std;

int main(){
    stack <string> st;
    string w;
    while (cin >> w) {
        st.push(w);
    }
    while (!st.empty()){
        cout << st.top() << ' ';
        st.pop();
    }
}
