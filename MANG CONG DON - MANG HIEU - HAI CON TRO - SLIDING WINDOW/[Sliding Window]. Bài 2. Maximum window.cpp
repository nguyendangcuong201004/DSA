#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    multiset <int> s;
    for (int i = 0; i < k; i++){
        s.insert(a[i]);
    }   
    cout << *(s.begin()) << ' ' << *(s.rbegin()) << endl;
    for (int i = k; i < n; i++){
        auto it = s.find(a[i - k]);
        s.erase(it);
        s.insert(a[i]);
        cout << *(s.begin()) << ' ' << *(s.rbegin()) << endl;
    }
}