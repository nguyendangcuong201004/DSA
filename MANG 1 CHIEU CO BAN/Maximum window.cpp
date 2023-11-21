#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    multiset <int> s;
    for (int &x : a) cin >> x;
    for (int i = 0; i < n - k  + 1; i++){
        for (int j = 0; j < k; j++){
            s.insert(a[i + j]);
        }
        cout << *s.begin() << ' ' << *s.rbegin() << endl;
        s.clear();
    }
}