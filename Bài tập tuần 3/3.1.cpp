#include <iostream>
#include <math.h>

using namespace std;
// Viết chương trình nhập vào mảng 1 chiều gồm n phần tử kiểu số nguyên.
// In ra mảng vừa nhập theo thứ tự ngược.
// Cho biết có bao nhiêu phần tử có nội dung là số nguyên tố.
// Tính tích các phần tử là ước số của k, với k được nhập từ bàn phím.
// Cho biết phần tử X xuất hiện ở lần thứ m tại vị trí thứ mấy,
// với X và m được nhập từ bàn phím.
// Sắp xếp mảng theo thứ tự giảm dần. In ra mảng sau khi sắp xếp.

int main() {
     // Viết chương trình nhập vào mảng 1 chiều gồm n phần tử kiểu số nguyên.
     int arr[100];
     int n;
     do {
          cout << "Nhập số lượng phần tử của mảng: ";
          cin >> n;
     } while (n < 1 || n > 100);

     for (int i = 0; i < n; i++) {
          cout << "arr[" << i << "] = ";
          cin >> arr[i];
     }

     // In ra mảng vừa nhập theo thứ tự ngược.
     for (int i = n - 1; i > -1; i--) {
          cout << arr[i] << " ";
     }
     cout << endl;

     // Cho biết có bao nhiêu phần tử có nội dung là số nguyên tố.
     int dem_snt = 0; // Tạo biến đếm số nguyên tố trong mảng
     // Duyệt qua từng số trong mảng => kt xem có phải snt không
     // Nếu là snt thì tăng biến đếm lên 1
     // Hok thì thui
     for (int i = 0; i < n; i++) {
          bool snt = true;

          int j = 2;

          while (snt && j <= sqrt(arr[i])) {
               if (arr[i] % j == 0) snt = false;
               j++;
          }

          if (snt) dem_snt++; 
     }

     cout << "Có " << dem_snt << " trong mảng vừa nhập!" << endl;

     // Tính tích các phần tử là ước số của k, với k được nhập từ bàn phím.
     int k;
     cout << "Nhập K = ";
     cin >> k;

     long T = 1;
     for (int i = 0; i < n; i++) {
          if (k % arr[i] == 0) {
               T *= arr[i];
          }
     }

     cout << "Tích các phần tử là ước số của " << k << " là: " << T << endl;

     // Cho biết phần tử X xuất hiện ở lần thứ m tại vị trí thứ mấy,
     int x, m, vt_xm;
     cout << "Nhập giá trị X cần tìm: ";
     cin >> x;
     
     do {
          cout << "Nhập M = ";
          cin >> m;
     } while (m < 1);

     int i = 0, sl_xuat_hien = 0; // Lưu số lần xuất hiện đã duyệt qua
     // khò khò khò zZz
     while (sl_xuat_hien < m && i < n) { 
          if (arr[i] == x) {
               sl_xuat_hien++;
               vt_xm = i;
          }

          i++;
     }

     if (sl_xuat_hien == 0) cout << "Không tìm thấy " << x << " xuất hiện lần thứ " << m << " trong mảng!";
     else cout << "Vị trí của " << x << " xuất hiện lần thứ " << m << " là: " << vt_xm;
     cout << endl;

     // Sắp xếp mảng theo thứ tự giảm dần. In ra mảng sau khi sắp xếp.
     for (int i = 0; i < n - 1; i++) {
          for (int j = i + 1; j < n; j++) {
               if (arr[i] < arr[j]) {
                    int tam = arr[i];
                    arr[i] = arr[j];
                    arr[j] = tam;
               }
          }
     }

     cout << "Mảng sau khi sắp xếp giảm dần: ";
     for (int i = 0; i < n; i++) cout << arr[i] << " ";

     return 0;
}