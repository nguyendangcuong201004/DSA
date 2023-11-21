#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    ll a[n];
  
    for (ll &x : a){
        cin >> x;
    }
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    for (int x : a){
        if (x > max1){
            max2 = max1;
            max1 = x;
        }
        else if (x > max2){
            max2 = x;
        }
    }
    cout << max1 << ' ' << max2 << endl;
}