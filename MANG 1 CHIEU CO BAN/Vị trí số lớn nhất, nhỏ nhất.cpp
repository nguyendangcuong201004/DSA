#include <bits/stdc++.h>

using namespace std;

typedef long long ll;



int main(){
    int n; cin >> n;
    ll a[n];
  
    for (ll &x : a){
        cin >> x;
    }
    int min = INT_MAX;
    int pos = 0;
    for (int i = 0; i < n; i++){
        if (min >= a[i]){
            min = a[i];
            pos = i;
        }
    }
    cout << pos << ' ' << max_element(a, a + n) - a << ' ';
}