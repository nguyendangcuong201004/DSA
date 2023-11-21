#include <bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    int res = 0;
    int a[n];
    for (int &x : a) cin >> x;
    stack <int> st;
    int i = 0;
    while (i < n){
        if (st.empty() || a[i] >= a[st.top()]){
            st.push(i);
            i++;
        }
        else {
            int idx = st.top();
            st.pop();
            if (st.empty()){
                res = max (res, (i - idx) * a[idx]);
            }
            else res = max (res, (i - st.top() - 1) * a[idx]);
        }
    }
    while (!st.empty()){
        int idx = st.top();
        st.pop();
        if (st.empty()){
            res = max (res, (i - idx) * a[idx]);
        }
        else res = max (res, (i - st.top() - 1) * a[idx]);
    }
    cout << res << endl;
}



//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//    int n; cin >> n;
//    int a[n];
//    for (int &x : a) {
//        cin >> x;
//    }
//    stack <int> st;
//    int res = 0;
//    for (int i = 0; i < n; i++) {
//        while (!st.empty() && a[i] < a[st.top()]){
//            int tmp = st.top();
//            st.pop();
//            if (st.empty()){
//                res = max (res, (i - tmp) * a[tmp]);
//            }
//            else res = max (res, (i - st.top() - 1) * a[tmp]);
//        }
//        st.push(i);
//    }
//    while (!st.empty()){
//        int tmp = st.top();
//        st.pop();
//        if (st.empty()){
//            res = max (res, n * a[tmp]);
//        }
//        else res = max (res, (n - st.top() - 1) * a[tmp]);
//    }
//    cout << res << endl;
//}
