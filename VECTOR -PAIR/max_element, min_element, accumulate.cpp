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
    cout << *min_element(v.begin(), v.end()) << endl;
    cout << *max_element(v.begin(), v.end()) << endl;
    cout << accumulate (v.begin(), v.end(), 0) << endl;
}