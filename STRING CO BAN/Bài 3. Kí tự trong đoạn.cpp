#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    ll tong = 0;
    for (char x : s){
        if (isdigit(x)){
            tong += 1ll * (x - '0');
        }
    }
    cout << tong << endl;
}