#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    vector <int> v;
    while (n--){
        int tmp;
        cin >> tmp;
        v.push_back(tmp);
    }
    int l, r;
    cin >> l >> r;
    reverse(v.begin(), v.end());
    for (int x : v){
        cout << x <<' ';
    }
    cout << endl;
    reverse(v.begin() + l, v.begin() + r + 1);
    for (int x : v){
        cout << x << ' ';
    }
}