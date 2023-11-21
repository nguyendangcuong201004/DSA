#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

bool check (pair <int, int> a[], int n, int s){
    for (int i = 0; i < n; i++){
        if (s > a[i].first){
            s += a[i].second;
        }
        else if (s <= a[i].first){
            return false;
        }
    }
    return true;
}

int main(){
    int n, s; cin >> n >> s;
    pair <int,int> a[n];
    for (int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }
    sort (a, a + n);
    if (check(a, n, s)){
        cout << "YES\n";
    }
    else cout << "NO\n";
}