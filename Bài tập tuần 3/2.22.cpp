#include <iostream>

using namespace std;

// Chương 2 - Bài 22
// Viết chương trình tính tổng S = 1/2 + 2/3 + 3/4 + … + n/(n+1),
// với n là số nguyên dương được nhập từ bàn phím
// BẰNG LỆNH NHẢY GOTO

int main() {
     int n;
     do {
          cout << "Nhập số nguyên dương N = ";
          cin >> n;
     } while (n < 1);

     double S = 0;

     // Khởi tạo giá trị cho vòng lặp
     int i = 1;

     // Nếu không thỏa điều kiện thì thoát không thực hiện lặp
     if (i > n) goto Thoat;
     else goto LapLai;


LapLai:  // Đặt nhãn lặp lại để goto tới
     S += i / float(i + 1);

     i++; // Tăng i 1 đơn vị sau mỗi vòng lặp
     if (i <= n) goto LapLai; // Nếu điều kiện vẫn đúng thì lặp lại

Thoat:
     cout << "Tổng S = " << fixed << S;

     return 0;
}