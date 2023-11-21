#include <bits/stdc++.h>

using namespace std;

vector<string> v;
 void khoi_tao(){
    queue<string> q;
    q.push("6");
    q.push("8");
    v.push_back("6");
    v.push_back("8");
    while (1){
        q.push(q.front() + "6");
        q.push(q.front() + "8");
        v.push_back(q.front() + "6");
        v.push_back(q.front() + "8");
        q.pop();
        if (v.size() >= 500){
            break;
        }
    }
 }

int main(){
    khoi_tao();
    int t; cin >> t;
    while (t--){
        int n; cin >> n;
        int dem = 0;
        for (int i = 0; i < v.size(); i++){
            if (v[i].length() <= n){
                dem++;
            }
        }
        cout << dem << endl;
        for (int i = 0; i < dem; i++){
            cout << v[i] << ' ';
        }
        cout << endl;
    }
}
