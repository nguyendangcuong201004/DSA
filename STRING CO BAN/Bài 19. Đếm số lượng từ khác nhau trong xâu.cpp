#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    set <string> se;
    while (cin >> s){
        for (char &x : s){
            x = tolower(x);
        }
        se.insert(s);
    }
    cout << se.size();
}