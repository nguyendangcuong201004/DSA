#include <bits/stdc++.h>

using namespace std;

int cnt[10000001];


int main(){
    long long n; cin >> n;
    long long cnt = 0;
    int a[10] = {1,2,5,10,20,50,100,200,500,1000};
    for (int i = 9; i >= 0; i--){
        cnt += n / a[i];
        n = n % a[i];
    } 
    cout << cnt;
}