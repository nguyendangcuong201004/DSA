#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int mod = 1e9 + 7;
int p[1000001];

bool cmp(int a, int b){
    if (a % 2 == 1 && b % 2 == 1){
        return a > b;
    }
    else if (a % 2 == 0 && b % 2 == 0){
        return a < b;
    }
    else if (a % 2 == 1 && b % 2 == 0){
        return true;
    }
    else 
        return false;
}

int main (){
    int n; cin >> n;
    int a[n];
    for (int &x : a){
        cin >> x;
    }
    sort(a, a + n, cmp);
    for (int x : a){
        cout << x << ' ';
    }
}    