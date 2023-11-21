#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int ans = INT_MIN;
    int l = 0;
    map <int, int> mp;
    int cnt = 0;
    for (int i = 0; i < n; i++){
        mp[a[i]]++;
        if (mp[a[i]] == 1) cnt++; 
        else {
           while ( mp[a[i]] != 1){
                mp[a[l]]--;
                if (mp[a[l]] == 0) cnt--;
                l++;
           }
        }
        if (ans < i - l + 1){
            ans = i - l + 1;
        }
    }
    cout << ans << endl;
}

