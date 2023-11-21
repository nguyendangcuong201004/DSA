#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    map <int, int> mp;
    for (int i = 0; i < n; i++){
        int tmp;
        cin >> tmp;
        mp[tmp]++;
    }
    long long cnt = 0;
    for (auto it : mp){
        if (it.second > 1){
            cnt += 1ll * it.second * (it.second - 1) / 2;
        }
    }
    cout << cnt;
}