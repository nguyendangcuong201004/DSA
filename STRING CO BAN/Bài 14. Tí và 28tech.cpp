#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; getline (cin, s);
    for (char &x : s){
        x = tolower(x);
    }
    stringstream ss (s);
    string w;
    int dem = 0;
    while (ss >> w){
        if (w == "28tech"){
            dem++;
        }
    }
    cout << dem << endl;
}