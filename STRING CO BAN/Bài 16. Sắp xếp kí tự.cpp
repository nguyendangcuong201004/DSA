#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    cin >> s;
    sort (s.begin(), s.end());
    for (char x : s){
        cout << x;
    }
    cout << endl;
    sort (s.begin(), s.end(), greater<int>());
    for (char x : s){
        cout << x;
    }
}