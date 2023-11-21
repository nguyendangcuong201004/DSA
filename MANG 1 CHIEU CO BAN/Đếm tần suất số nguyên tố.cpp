#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];

bool check(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

int main(){
    int n;
    vector <int> v;
    map <int, int> mp;
    while (cin >> n){
        mp[n]++;
        v.push_back(n);
    }
    for (int i : v){
        if (check(i) && mp[i]){
            cout << i << " " << mp[i] << endl;
            mp[i] = 0;
        }
    }
}