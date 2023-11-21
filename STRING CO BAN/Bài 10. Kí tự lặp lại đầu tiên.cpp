#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    int cnt[256] = {0};
    for (char x : s){
        cnt[x]++;
        if (cnt[x] >= 2){
            cout << x;
            return 0;
        }
    }
    
    cout << "NONE\n";
}