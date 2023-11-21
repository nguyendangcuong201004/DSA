#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    int a[n];
    for (int &x : a) cin >> x;
    int min = *min_element(a, a + n);
    int cnt = 0;
    for (int x : a){
        if (x == min){
            cnt++;
        }
    }
    cout << cnt << endl;
}