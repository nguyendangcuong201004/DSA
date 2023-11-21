#include <bits/stdc++.h>

using namespace std;

int main() {
    string s; int x, y; cin >> s >> x >> y;
    int res = INT_MIN;
    int l = 0;
    int dem2 = 0;
    int dem8 = 0;
    for (int r = 0; r < s.length(); r++){
        if (s[r] == '2'){
            dem2++;
        }
        if (s[r] == '8'){
            dem8++;
        }
        while (dem2 > x || dem8 > y){
            if (s[l] == '2'){
                dem2--;
            }
            else dem8--;
            l++;
        }
        res = max (res, r - l + 1);
    }
    cout << res << endl;
}
