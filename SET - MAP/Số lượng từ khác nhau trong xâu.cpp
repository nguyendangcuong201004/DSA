#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;



int main(){
    string tmp;
    set <string> s;
    while (cin >> tmp){
        s.insert(tmp);
    }
    int k = s.size();
    cout << k << endl;
    auto a = s.begin(); auto b = s.rbegin();
    cout << * a << ' ' << * b << endl;
}