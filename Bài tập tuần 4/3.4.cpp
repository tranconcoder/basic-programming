#include <iostream>

using namespace std;

// Chương 3 - Bài 4
// Viết chương trình thực hiện các công việc sau:
// - Nhập mảng 1 chiều gồm n phần tử kiểu số nguyên.
// - In ra mảng vừa nhập.
// - In ra vị trí của các phần tử lớn nhất có trong dãy.
// - Tính trị trung bình của các phần tử dương có trong dãy.
// - Đếm số phần tử là lũy thừa của K, với K nhập từ bàn phím.
int main() {
     // Nhập mảng
     int A[100];
     int n;
     do {
          cout << "Nhập số lượng phần tử của mảng: ";
          cin >> n;
     } while (n < 1 and n > 100);

     for (int i = 0; i < n; i++) {
          cout << "A[" << i << "] = ";
          cin >> A[i];
     }

     // In mảng vừa nhập
     cout << "Mảng vừa nhập là: ";
     for (int i = 0; i < n; i++) cout << A[i] << " ";
     cout << endl;

     // In ra vị trí của các phần tử lớn nhất trong dãy
     int A_vt_max[100] = { 0 }; // Danh sách vị trí của các phần tử lớn nhất trong mảng
     int max = A[0];
     int m = 1; // Lưu số lượng phần tử mà mảng A_vt_max đang chứa

     for (int i = 1; i < n; i++) {
          if (A[i] > max) { // Nếu tìm thấy số lớn hơn Max
               max = A[i]; // Cập nhật lại max
               m = 1; // Reset lại biến đếm phần tử của A_vt_max
               A_vt_max[0] = i; // Reset lại mảng và cập nhật vị trí của max mới
          } else if (A[i] == max) { // Nếu thấy số bằng max 
               A_vt_max[m] = i; // Thêm vị trí của số đó vào mảng A_vt_max
               m++; // Tăng biến đếm
          }
     }

     cout << "Vị trí các phần tử lớn nhất trong mảng: ";
     for (int i = 0; i < m; i++) cout << A_vt_max[i] << " ";
     cout << endl;

     // Tính giá trị trung bình các phần tử dương trong mảng
     int tong_duong = 0;
     int dem_duong = 0;

     for (int i = 0; i < n; i++) {
          if (A[i] > 0) {
               dem_duong++;
               tong_duong += A[i];
          }
     } 

     double tbc_duong = float(tong_duong) / dem_duong;
     cout << "Trung bình cộng các số nguyên dương trong mảng là: ";
     cout << fixed << tbc_duong << endl;

     // Đếm phần tử là lũy thừa của k, với k nhập từ bàn phím 
     int k;
     do {
          cout << "Nhập K = ";
          cin >> k;
     } while (k < 2);

     int dem_lt = 0;
     for (int i = 0; i < n; i++) {
          long lt = k;

          while (lt < A[i]) lt *= lt;

          if (lt == A[i]) dem_lt++;
     }

     cout << "Có " << dem_lt << " phần tử trong mảng là lũy thừa của " << k << endl;

     return 0;
}