#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    int n; cin >> n;
    set<int> se;
    while (n--){
        int tmp; cin >> tmp;
        se.insert(tmp);
    }
    cout << se.size();
}