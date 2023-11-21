#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    string tmp = "28tech";
    for (int i = 0; i < tmp.length(); i++){
        while (s.find(tmp[i]) != string::npos){
            s.erase(s.find(tmp[i]), 1);
        }
    }
    if (s.length() == 0){
        cout << "EMPTY\n";
    }
    else cout << s;
}