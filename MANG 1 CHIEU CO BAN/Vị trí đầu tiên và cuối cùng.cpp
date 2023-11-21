#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    int pos1 = -2; int pos2 = -2;
    for (int i = 0; i < n; i++){
        if (a[i] == k){
            pos1 = i;
            break;
        }
    }
    for (int i = 0; i < n; i++){
        if (a[i] == k){
            pos2 = i;
        }
    }
    cout << pos1 + 1 << ' ' << pos2+ 1 << endl;
}