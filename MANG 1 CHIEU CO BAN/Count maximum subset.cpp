#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main (){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort (a, a + n);
    multiset <int> s;
    s.insert(a[0]);
    int chay = 0;
    int dem = INT_MIN;
    for (int i = 1; i < n; i++){
        if (a[i] - a[chay] <= k){
            s.insert(a[i]);
            int tmp = s.size();
            dem = max (dem, tmp);
        }
        else {
            s.erase(a[chay]);
            chay++;
        }
    }
    cout << dem << endl;
}