#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; getline (cin, s);
    for (char &x : s){
        if (x == '?' || x == '!' || x == '.' || x == ','){
            x = ' ';
        }
    }
    stringstream ss (s);
    string w;
    while (ss >> w){
        cout << w << ' ';
    }
}