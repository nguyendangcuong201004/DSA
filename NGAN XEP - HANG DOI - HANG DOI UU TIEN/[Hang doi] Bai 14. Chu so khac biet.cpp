#include <bits/stdc++.h>

using namespace std;

vector<int> v;

void khoi_tao(){
    queue<string> q;
    for (int i = 1; i <= 5; i++){
        v.push_back(i);
        q.push(to_string(i));
    }
    while (!q.empty()){
        string x = q.front(); q.pop();
        int d[256] = {0};
        for (char c : x){
            d[c] = 1;
        }
        for (char c = '0'; c <= '5'; c++){
            if (d[c] == 0){
                string tmp = x + string(1, c);
                int so = stoi(tmp);
                q.push(tmp);
                v.push_back(so);
            }
        }
        if (x.length() > 1e6){
            break;
        }
    }
}


int main(){
    khoi_tao();
    int t; cin >> t;
    while (t--){
        int L, R; cin >> L >> R;
        int dem = 0;
        for (int x : v){
            if (x > R){
                break;
            }
            if (x >= L){
                dem++;
            }
        }
        cout << dem << endl;
    }
}
    
