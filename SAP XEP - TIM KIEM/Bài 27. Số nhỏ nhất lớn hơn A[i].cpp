#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    vector <int> v;
    for (int &x : a){
        cin >> x;
        v.push_back(x);
    }
    sort (v.begin(), v.end());
    for (int i = 0; i < n; i++){
        auto it = upper_bound(v.begin(), v.end(), a[i]);
        if (it != v.end()){
            cout << *it << ' ';
        }
        else cout << "_" << ' ';
    }
}