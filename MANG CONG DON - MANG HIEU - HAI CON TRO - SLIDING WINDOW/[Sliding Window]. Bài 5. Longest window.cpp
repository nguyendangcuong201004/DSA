#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int cnt[256];

int main(){
    string s, r = "";
    cin >> s;
    int ans = INT_MIN;
    for (int i = 0; i < s.size(); i++){
        cnt[s[i]]++;
        if (cnt[s[i]] == 1){
            r.push_back(s[i]);
        }
        else {
            while (cnt[s[i]] > 1){
                cnt[r[0]]--;
                r.erase(0, 1);
            }
            r.push_back(s[i]);
        }
        int k = r.size();
        ans = max (ans, k);
    }
    cout << ans;
}