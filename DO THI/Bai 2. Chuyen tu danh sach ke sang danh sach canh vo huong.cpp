#include <bits/stdc++.h>

using namespace std;

vector <int> adj[1001];

int main () {
    int n; cin >> n;
    cin.ignore();
    for (int i = 1; i <= n; i++){
        string s;
        getline (cin, s);
        string w;
        stringstream ss (s);
        while (ss >> w) {
            int tmp = stoi(w);
            if (i < tmp) {
                cout << i << ' ' << tmp << endl;
            }
        }
    }
}
