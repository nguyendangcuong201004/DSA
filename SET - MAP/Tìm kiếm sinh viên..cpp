#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    int n; cin >> n;
    cin.ignore();
    map <string, string > mp;
    map <string, int> m;
    while (n--){
        string s1, s2;
        getline (cin, s1);
        getline (cin, s2);
        mp[s1] = s2;
        m[s1] = 1;
    }
    int q;
    cin >> q;
    cin.ignore();
    while (q--){
        string tmp;
        getline (cin, tmp);
            if (m[tmp]){
                cout << mp[tmp] << endl;
            }
            else cout << "NOT FOUND\n";
        }
}