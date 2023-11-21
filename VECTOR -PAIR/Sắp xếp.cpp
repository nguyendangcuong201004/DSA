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
    sort (v.begin(), v.end());
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
    cout << endl;
    sort (v.begin(), v.end(), greater <int> ());
    for (auto it = v.begin(); it != v.end(); it++){
        cout << *it << ' ';
    }
}