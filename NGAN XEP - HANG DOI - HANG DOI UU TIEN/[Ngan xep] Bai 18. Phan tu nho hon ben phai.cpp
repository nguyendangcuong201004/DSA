#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int a[n], b[n], c[n], res[n];
    for (int &x : a) cin >> x;
    stack <int> st;
    for (int i = 0; i < n; i++){
        if (st.empty() || (a[st.top()] > a[i])){
            st.push(i);
        }
        else {
            while (!st.empty() && a[st.top()] < a[i]){
                b[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while (!st.empty()){
        b[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < n; i++){
        if (st.empty() || (a[st.top()] < a[i])){
            st.push(i);
        }
        else {
            while (!st.empty() && a[st.top()] > a[i]){
                c[st.top()] = a[i];
                st.pop();
            }
            st.push(i);
        }
    }
    while (!st.empty()){
        c[st.top()] = -1;
        st.pop();
    }
    for (int i = 0; i < n - 1; i++){
        c[i] = c[i + 1];
    }
    for (int i = 0; i < n; i++){
        if (b[i] == -1){
            res[i] = -1;
        }
        else res[i] = c[i];
    }
    for (int x : res){
        cout << x << ' ';
    }
}
