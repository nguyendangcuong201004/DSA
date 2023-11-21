#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    for (int i = 1; i < s.length(); i++){
        if (abs(s[i] - s[i - 1]) != 1){
            return false;
        }
    }
    return true;
}

int main(){
    string s; cin >> s;
    if (check(s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}