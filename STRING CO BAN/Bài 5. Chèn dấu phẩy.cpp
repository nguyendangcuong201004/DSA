#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    int n = s.length();
    int a[] = {3,6,9,12,15,18};
    reverse(s.begin(), s.end());
    for (int i = 0; i < 6; i++){
        if (a[i] < n){
            s.insert(s.begin() + (i + a[i]), ',');
        }
    }
    reverse(s.begin(), s.end());
    cout << s << endl;
}