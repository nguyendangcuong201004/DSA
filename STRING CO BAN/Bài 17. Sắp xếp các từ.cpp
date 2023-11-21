#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    vector <string> v;
    string s;
    while (cin >> s){
        v.push_back(s);
    }
    sort(v.begin(), v.end());
    for (string x : v){
        cout << x << ' ';
    }
    cout << endl;
    sort (v.begin(), v.end(), greater<string>());
    for (string x : v){
        cout << x << ' ';
    }
}