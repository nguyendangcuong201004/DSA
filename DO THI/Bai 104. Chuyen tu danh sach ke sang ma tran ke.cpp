#include <bits/stdc++.h>


using namespace std;



int main (){
    int n; cin >> n;
    int a[n + 1][n + 1] = {0};
    cin.ignore();
    for (int i = 1; i <= n; i++) {
        string s;
        getline (cin , s);
        stringstream ss (s);
        string w;
        while (ss >> w) {
            int tmp;
            tmp = stoi (w);
            a[i][tmp] = 1;
        }
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++){
            cout << a[i][j] << ' ';; 
        }
        cout << endl;
    }
}


