#include <bits/stdc++.h>

using namespace std;

vector <long long> v;
vector <long long> res(200);

void khoi_tao(){
    queue<long long> q;
    q.push(8);
    v.push_back(8);
    while (1){
        long long t1 = q.front() * 10 + 0;
        long long t2 = q.front() * 10 + 8;
        q.pop();
        q.push(t1);
        q.push(t2);
        v.push_back(t1);
        v.push_back(t2);
        if (v.size() >= 4000){
            break;
        }
    }
    for (long long i = 1; i <= 200; i++){
        for (long long x : v) {
            if (x % i == 0){
                res[i] = x;
                break;
            }
        }
    }
}

int main(){
    khoi_tao();
    int n; cin >> n;
    while (n--){
        long long tmp; cin >> tmp;
        cout << res[tmp] << endl;
    }
}
