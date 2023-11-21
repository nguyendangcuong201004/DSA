#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }

    int max_sum = -1000000;
    for (int i = 0; i < n - 2; i++) {
        for (int j = 0; j < n - 2; j++) {
            int sum = 0;
            for (int p = i; p < i + 3; p++) {
                for (int q = j; q < j + 3; q++) {
                    if (p >= 0 && p < n && q >= 0 && q < n) {
                        sum += a[p][q];
                    }
                }
            }
            if (sum > max_sum) {
                max_sum = sum;
            }
        }
    }

    cout << max_sum;

    return 0;
}
