#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int k; cin >> k;
    int cnt1 = 0; int cnt2 = 0;
    for (int x : a){
        if (x > k){
            cnt1++;
        }
        else if (x < k){
            cnt2++;
        }
    }
    cout << cnt2 << endl << cnt1 << endl;
}