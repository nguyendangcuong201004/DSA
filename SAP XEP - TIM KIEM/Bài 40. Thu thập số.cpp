#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    int a[n];
    map <int, int> mp;
    int i = 0;
    for (int &x : a){
        cin >> x;
        mp[x] = i;
        i++;
    }
    sort (a, a + n);
    int dem = 1;
    for (int i = 1; i < n; i++){
        if (mp[a[i]] < mp[a[i - 1]]){
            dem++;
        }
    }
    cout << dem << endl;
}

