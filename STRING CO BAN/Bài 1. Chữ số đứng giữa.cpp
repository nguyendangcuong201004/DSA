#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    if (s.length() % 2 == 0){
        cout << "NOT FOUND\n";
        return 0;
    }
    cout << s[s.length() / 2];
}