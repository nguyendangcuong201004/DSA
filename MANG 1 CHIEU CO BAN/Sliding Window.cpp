#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

const int mod = 1e9 + 7;

/* 
		SLIDING WINDOW LA 1 THUẬT TOÁN KHÁ HAY, NÓ CHO TA TRƯỢT CỬA SỔ CỠ K
		VD TRONG BÀI TOÁN NÀY TA CẦN TÌM DÃY CON CÓ TỔNG MAX VÀ XUẤT HIỆN ĐẦU TIÊN
		TA DÙNG 1 BIẾT SUM TÍNH LẠI TỔNG MẢNG K ĐẦU TIÊN TỪ 0 -> K - 1, SAU ĐÓ GÁN CHO 1 
		BIẾN RES, VÀ KHAI BÁO THÊM 1 BIẾN IDX DỂ LƯU LẠI CHỈ SỐ NẰM TRONG MẢNG GỐC 
		SAU ĐÓ TA COUT RA KẾT QUẢ
*/

int main(){
    int n, k; cin >> n >> k;
    int a[n];
    for (int &x : a) {
        cin >> x;
    }
    long long sum = 0;
    for (int i = 0; i < k; i++){
        sum += a[i];
    }
    long long res = sum;
    int idx = k - 1;
    for (int i = k; i < n; i++){
        sum = sum - a[i - k] + a[i];
        if (res < sum){
            res = sum;
            idx = i;
        }
    }
    cout << res << endl;
    for (int i = idx - k + 1; i <= idx; i++){
        cout << a[i] << ' ';
    }
}