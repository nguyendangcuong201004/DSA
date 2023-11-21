#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int cnt[256];

int main(){
    string s , r= "";
    cin >> s;
    set <char> se;
    for (char x : s){
        se.insert(x);
    }
    int so_phan_tu_khac = se.size();
    int dem = 0;
    int ans = INT_MAX;
    for (int i = 0; i < s.size(); i++){
        cnt[s[i]]++;
        if (cnt[s[i]] == 1){
            ++dem;
        }
        if (dem <= so_phan_tu_khac){
            r.push_back(s[i]);
            while (dem == so_phan_tu_khac){
                int tmp = r.size();
                ans = min(ans, tmp);
                cnt[r[0]]--;
                if (cnt[r[0]] == 0){
                    dem--;
                }
                r.erase(0, 1);
            }
        }
    }
    cout << ans;
}