#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (string s){
    string tmp = s;
    reverse(s.begin(), s.end());
    if (s == tmp){
        return true;
    }
    return false;
}

int main(){
    string s;
    set <string> se;
    while (cin >> s){
        if (check(s)){
            se.insert(s);
        }
    }
    for (string x : se){
        cout << x << ' ';
    }
}