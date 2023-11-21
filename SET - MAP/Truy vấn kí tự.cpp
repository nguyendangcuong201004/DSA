#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    string s; cin >> s;
    map <char, int> mp;
    int max = 1;
    set <char> se;
    for (char x : s){
        se.insert(x);
        mp[x]++;
        if (max < mp[x]){
            max = mp[x];
        }
    }
    for (auto x : mp){
        if (x.second == max){
            cout << x.first << ' ' << max << endl;
            break;
        }
    }
    int min = INT_MAX;
    for (auto x : mp){
        if (min > x.second){
            min = x.second;
        }
    }
    char k;
    for (auto x : mp){
        if (x.second == min){
            k = x.first;
        }
    }
    cout << k <<  ' ' << min << endl;
    cout << se.size();
}