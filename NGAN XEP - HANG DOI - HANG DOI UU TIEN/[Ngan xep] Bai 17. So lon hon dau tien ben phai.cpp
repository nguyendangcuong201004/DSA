#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], res[n];
    for (int &x : a) cin >> x;
    stack <int> st;
    for (int i = 0; i < n; i++) {
        while (!st.empty() && a[i] > a[st.top()]){
            res[st.top()] = a[i];
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty()){
        res[st.top()] = -1;
        st.pop();
    }
    for (int x : res){
        cout << x << ' ';
    }
}
