#include <bits/stdc++.h>

using namespace std;

int main(){
    int n; cin >> n;
    queue <string> q;
    q.push("1");
    vector <string> v;
    v.push_back("1");
    while (1){
        string t1 = q.front() + "0";
        string t2 = q.front() + "1";
        v.push_back(t1);
        v.push_back(t2);
        q.pop();
        q.push(t1);
        q.push(t2);
        if (v.size() >= n){
            break;
        }
    }
   for (int i = 0; i < n; i++){
        cout << v[i] << ' ';
   }
}
