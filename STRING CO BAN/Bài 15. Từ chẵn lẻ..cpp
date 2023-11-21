#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    vector <string> v;
    string s;
    int i = 1;
    while (cin >> s){
        if (i % 2 == 1){
            v.push_back(s);
        }
        else {
            reverse(s.begin(), s.end());
            v.push_back(s);
        }
        i++;
    }
    for (string x : v){
        cout << x << ' ';
    }
}