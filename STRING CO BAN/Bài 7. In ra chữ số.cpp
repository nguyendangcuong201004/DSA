#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int main(){
    string s; cin >> s;
    for (char x : s){
        if (isdigit(x)){
            cout << x ;
        }
    }
    cout << endl;
    for (char x : s){
        if (isalpha(x)){
            cout << x;
        }
    }
}