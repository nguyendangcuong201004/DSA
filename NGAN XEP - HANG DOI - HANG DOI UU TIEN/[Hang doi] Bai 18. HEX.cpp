#include <bits/stdc++.h>

using namespace std;

string xoay_trai(string s){
    char s0 = s[0];
    char s1 = s[1];
    char s3 = s[3];
    char s4 = s[4];
    s[0] = s3;
    s[1] = s0;
    s[3] = s4;
    s[4] = s1;
    return s;
}

string xoay_phai(string s){
    char s1 = s[1];
    char s2 = s[2];
    char s4 = s[4];
    char s5 = s[5];
    s[1] = s4;
    s[2] = s1;
    s[5] = s2;
    s[4] = s5;
    return s;
}

int bfs(string s, string t){
    set <string> se;
    queue <pair<string, int>> q;    
    q.push({s, 0});
    se.insert(s);
    while (!q.empty()){
        auto x = q.front(); q.pop();
        string tmp = x.first;
        int cnt = x.second;
        if (tmp == t){
            return cnt;
        }
        string s1 = xoay_trai(tmp);
        string s2 = xoay_phai(tmp);
        if (se.count(s1) == 0){
            q.push({s1, cnt + 1});
            se.insert(s1);
        }
        if (se.count(s2) == 0){
            q.push({s2, cnt + 1});
            se.insert(s2);
        }
    }
}

int main(){
    string s, t;
    for (int i = 0; i < 6; i++){
        char x; cin >> x;
        s.push_back(x);
    }
    for (int i = 0; i < 6; i++){
        char x; cin >> x;
        t.push_back(x);
    }
    cout << bfs(s, t) << endl;
}

