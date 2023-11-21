#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool cmp (string s1, string s2){
    if (s1.length() != s2.length()){
        return s1.length() < s2.length();
    }
    return s1 < s2;
}

int main(){
    vector <string> v;
    string s;
    while (cin >> s){
        v.push_back(s);
    }
    sort(v.begin(), v.end(), cmp);
    for (string x : v){
        cout << x << ' ';
    }
}