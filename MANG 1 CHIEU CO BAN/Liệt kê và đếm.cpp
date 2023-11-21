#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];
map <int,int> mp;
bool check (int n){
    if (n < 10){
        return true;
    }
    int m = n % 10;
    n /= 10;
    while (n){
        if (m < n % 10){
            return false;
        }
        m = n % 10;
        n /= 10;
    }
    return true;
}

bool cmp(int a, int b){
    if (mp[a] != mp[b]){
        return mp[a] > mp[b];
    }
    return a < b;
}

int main(){
    vector <int> v;
    int n; 
    while (cin >> n){
        if (check(n)){
            mp[n]++;
            if (mp[n] == 1){
                v.push_back(n);
            }
        }
    }
    sort(v.begin(), v.end(), cmp);
    for (int x : v){
        cout << x << ' ' << mp[x] << endl;
    }
}