#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int min_val = INT_MAX;
    for (int i = 0; i < n; i++){
        for (int j = i + 1; j < n; j++){
            min_val = min(min_val, abs((a[i] - a[j])));
        }
    }
    cout << min_val << endl;
}

//...................................................

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
            if (a[j] == a[i]){
                ok = false;
                break;
            }
        }
        if (ok == true){
            cout << a[i] << ' ';
        }
    }
}