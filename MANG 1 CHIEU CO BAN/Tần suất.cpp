#include <bits/stdc++.h>

using namespace std;

int cnt[1000000];

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        cnt[a[i]]++;
    }
    for (int x : a){
        if (cnt[x]){
            cout << x << ' ' << cnt[x] << endl;
            cnt[x] = 0;
        }
    }
    
}
//..................................................

#include <bits/stdc++.h>

using namespace std;

int cnt[1000000];

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    for (int i = 0; i < n; i++){
        bool ok = true;
        for (int j = 0; j < i; j++){
            if (a[i] == a[j]){
                ok = false;
                break;;
            }
        }
        int dem = 1;
        if (ok){
            for (int k = i + 1; k < n; k++){
                if (a[k] == a[i]){
                    dem++;
                }
            }
            cout << a[i] << ' ' << dem << endl;
        }
    }
    
}