#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

int mod = 1e9 + 7;

bool nt(int n){
    if (n < 2){
        return false;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if (n % i == 0){
            return false;
        }
    }
    return true;
}

bool tong(int n){
    int tong = 0;
    while (n){
        tong += n % 10;
        n /= 10;
    }
    return nt(tong);
}



bool cp (int n){
    int can = sqrt(n);
    if (can * can == n){
        return true;
    }
    return false;
}

bool tn(int n){
    int tmp = n;
    int lat = 0;
    while (n){
        lat = lat * 10 + n % 10;
        n /= 10;
    }
    if (lat == tmp){
        return true;
    }
    return false;
}

int main(){
    int n; cin >> n;
    ll a[n];
  
    for (ll &x : a){
        cin >> x;
    }
    int snt = 0;
    int tnt = 0;
    int scp = 0;
    int stn = 0;
    for (int x : a){
        if (nt (x)){
            snt++;
        }
        if (cp(x)){
            scp++;
        }
        if (tn(x)){
            stn++;
        }
        if (tong(x)){
            tnt++;
        }
    }
    cout << snt << endl <<  stn << endl << scp << endl << tnt << endl;
}