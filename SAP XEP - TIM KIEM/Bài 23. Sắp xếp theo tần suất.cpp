#include <bits/stdc++.h>

using namespace std;

bool cmp1(pair <int,int> a,pair <int,int> b ){
    if (a.second != b.second){
        return a.second > b.second;
    }
    return a.first < b.first;
}

bool cmp2(pair <int,int> a,pair <int,int> b ){
        return a.second > b.second;
}

int main(){    
    int n; cin >> n;
    map <int,int> mp;
    int a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i];
        mp[a[i]]++;
    }
    vector <pair<int,int>> v;
    for (auto it : mp){
        v.push_back(it);
    }
    sort(v.begin(), v.end(), cmp1);
    for (auto it : v){
        for (int j = 0; j < it.second; j++){
            cout << it.first  << " ";
        }
    }
    cout << endl;
    vector <pair<int,int>> v2;
    for (int i = 0; i < n; i++){
        if (mp.count(a[i])){
            v2.push_back({a[i], mp[a[i]]});
            mp.erase(a[i]);
        }
    }
    stable_sort(v2.begin(), v2.end(), cmp2);
    for (auto it : v2){
        for (int j = 0; j < it.second; j++){
            cout << it.first  << " ";
        }
    }
}