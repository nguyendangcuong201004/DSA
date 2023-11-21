#include <bits/stdc++.h>

using namespace std;


int main () {
    int n; cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++){
        string s;
        getline (cin, s);
        string w;
        stringstream ss (s);
        set <int> se;
        while (ss >> w) {
            int tmp = stoi(w);
            se.insert(tmp);
        }
        for (int x : se) {
            cout << i << ' ' << x << endl;  
        }
    }
}
