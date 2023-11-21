#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int tmp;
    int cnt = 0;
    int c = 0;
    int l = 0;
    while (cin >> tmp){
        cnt++;
        if (tmp %2 == 0) {
            c++;
        }
        else l++;
    }
    if (cnt % 2 == 0 && c > l || cnt % 2 == 1 && l > c){
        cout << "YES\n";
    }
    else cout << "NO\n";
}