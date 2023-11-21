#include <bits/stdc++.h>

using namespace std;

int main(){ 
    priority_queue<int> q;
    int t; cin >> t;
    while (t--){
        int cnt[256] = {0};
        int k; cin >> k;
        string s; cin >> s;
        for (char x : s){
            cnt[x]++;
        }
        for (int i = 0; i < 256; i++){
            if (cnt[i] != 0){
                q.push(cnt[i]);
            }
        }
        while (k-- && !q.empty()){
            int top = q.top();
            q.pop();
            int push = top - 1;
            if (push > 0){
                q.push(push);
            }
        }
        long long res = 0;
        while (!q.empty()){
            res += q.top() * q.top();
            q.pop();
        }
        cout << res << endl;
    }
}
