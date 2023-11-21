#include <bits/stdc++.h>

using namespace std;

int main(){
    string s, t;
    getline (cin, s);
    getline (cin, t);
    int dem1[256] = {0}, dem2[256] = {0};
    for (char x : t){
        dem2[x]++;
    }
    int ans = INT_MAX;
    int l = 0;
    int dem = 0;
    int idx = -1;
    for (int r = 0; r < s.size(); r++){
        dem1[s[r]]++;
        if (dem1[s[r]] <= dem2[s[r]]) ++dem;
        if (dem == t.size()){
            while (dem1[s[l]] > dem2[s[l]] || dem2[s[l]] == 0){
                if (dem1[s[l]] > dem2[s[l]]){
                    dem1[s[l]]--;
                }
                ++l;
            }
            if (ans > r - l + 1){
                ans = r - l + 1;
                idx = l;
            }
        }
    }
    if (idx == -1){
        cout << -1;
    }
    else {
        for (int i = idx; i < idx + ans; i++){
            cout << s[i];
        }
    }
}