#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s;
    int dem = 0;
    while (cin >> s){
        bool ok = true;
        for (int i = 0; i < s.length(); i++){
            if (s[i] < 65 || s[i] > 90){
                ok = false;
                break;
            }
        }
        if (ok){
            dem++;
        }
    }
    cout << dem << endl;
}