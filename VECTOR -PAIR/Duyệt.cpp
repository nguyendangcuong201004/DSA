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
    int l1 = l; int r1 = r;
    while (l <= r){
        auto it = v.begin() + l;
        cout << *it << ' ';
        l++;
    }
    cout << endl;
    while (l1 <= r1){
        auto it = v.begin() + r1;
        cout << *it << ' ';
        r1--;
    }
}