#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    map <int, int> mp;
    int a[n];
    int max = INT_MIN;
    for (int &x : a){
        cin >> x;
        mp[x]++;
        if (max < mp[x]){
            max = mp[x];
        }
    }
    sort(a, a + n);
    for (int x : a){
        if (mp[x] == max){
            cout << x << ' ' << mp[x] << endl;
            return 0;
        }
    }
 }