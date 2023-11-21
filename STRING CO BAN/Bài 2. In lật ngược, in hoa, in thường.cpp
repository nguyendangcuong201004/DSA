#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

string latnguoc (string s){
    string tmp = "";
    for (int i = s.length() - 1; i >= 0; i--){
        tmp.push_back(s[i]);
    }
    return tmp;
}

void thuong (string &s){
    for (char &x : s){
        x = tolower(x);
    }
}

void hoa (string &s){
    for (char &x : s){
        x = toupper(x);
    }
}

int main(){
    string s;
    cin >> s;
    cout << latnguoc(s) << endl;
    thuong(s);
    cout << s << endl;
    hoa(s);
    cout << s << endl;
}