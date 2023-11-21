#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check(int a[], int n, int k){
    int l = 0;
    int r = n - 1;
    while (l < r){
        int sum = a[l] + a[r];
        if (sum == k){
            return true;
        }
        if (sum > k){
            r--;
        }
        else l++;
    }
    return false;
}

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) cin >> x;
    sort (a, a + n);
    if (check (a, n, k)){
        cout << "YES\n";
    }
    else cout << "NO\n";    
}