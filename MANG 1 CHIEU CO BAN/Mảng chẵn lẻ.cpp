#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    int a[n];
    int c = 0; int l = 0;
    for (int &x : a){
        cin >> x;
        if (x %  2 == 0){
            c++;
        }
        else l++;
    }
    if (c > l){
        cout << "CHAN\n";
    }
    else if (c < l){
        cout << "LE\n";
    }
    else cout << "CHANLE\n";
}