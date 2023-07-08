#include <iostream>
#include <math.h>

using namespace std;
// Chương 3 - Chương trình 2
//  Viết chương trình nhập vào ma trận a gồm m hàng, n cột, các phần tử kiểu số nguyên.
// In ra ma trận vừa nhập.
// Cho biết trong ma trận có bao nhiêu phần tử là số chính phương.
// Tính tích các phần tử khác 0 nằm trên cột c, với c nhập từ bàn phím.
// Sắp xếp các phần tử nằm trên hàng h theo thứ tự giảm dần,
// với h nhập từ bàn phím. In ra ma trận sau khi sắp xếp.
int main() {
     int ma_tran[100][100];
     int m,n;
     do {
          cout << "Nhập số hàng của ma trận: ";
          cin >> m;
     } while (m < 1 || m > 100);
     do {
          cout << "Nhập số cột của ma trận: ";
          cin >> n;
     } while (n < 1 || n > 100);

     for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
               cout << "Nhập A[" << i << "][" << j << "] = ";
               cin >> ma_tran[i][j];
          }
     }

     cout << "Ma trận bạn đã nhập: \n";
     for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) cout << ma_tran[i][j] << "\t";
          cout << endl;
     }

     // Cho biết trong ma trận có bao nhiêu phần tử là số chính phương.     
     // Số chính phương là số khi căn bậc 2 thì vẫn là số nguyên (chia hết cho 1)
     int dem_cp = 0;
     for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) {
               double k = sqrt(ma_tran[i][j]);
               if (k - int(k) == 0) dem_cp++;
          }
     }
     cout << "Trong ma trận có " << dem_cp << " số chính phương" << endl;

     // Tính tích các phần tử khác 0 trên cột c, với c nhập từ bàn phím
     int c;
     do {
          cout << "Nhập cột cần tính tích: ";
          cin >> c;
     } while (c < 0 || c > n - 1);

     bool found = false; // nếu không có số khác 0 thì vẫn là false
     long T = 1;

     for (int i = 0; i < m; i++) {
          if (ma_tran[i][c] != 0) {
               found = true;
               T *= ma_tran[i][c];
          }
     }

     if (found) cout << "Tích các phần tử khác 0 ở cột " << c << " là: " << T;
     else cout << "Không có phần tử nào khác 0 ở cột " << c;
     cout << endl;

     // Sắp xếp các phần tử nằm trên hàng h theo thứ tự giảm dần,
     // với h nhập từ bàn phím.
     // In ra ma trận sau khi sắp xếp
     int h;
     do {
          cout << "Nhập hàng cần sắp xếp theo chiều giảm dần: ";
          cin >> h;
     } while (h < 0 || h > m - 1);

     for (int i = 0; i < n - 1; i++) {
          for (int j = i + 1; j < n; j++) {
               if (ma_tran[h][i] < ma_tran[h][j]) {
                    int tam = ma_tran[h][i];
                    ma_tran[h][i] = ma_tran[h][j];
                    ma_tran[h][j] = tam;
               }
          }
     }

     cout << "Ma trận sau khi đã sắp xếp: \n";
     for (int i = 0; i < m; i++) {
          for (int j = 0; j < n; j++) cout << ma_tran[i][j] << "\t";
     }

     return 0;
}