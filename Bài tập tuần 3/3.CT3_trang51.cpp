#include <iostream>

using namespace std;

// Chương trình 3 - Trang 51
// Viết chương trình nhập vào mảng 1 chiều gồm n phần tử kiểu số nguyên.
// In ra mảng vừa nhập.
// Cho biết có bao nhiêu phần tử có nội dung là lẻ.
// Tính tổng các phần tử là bội số của k, với k được nhập từ bàn phím.
// Cho biết phần tử x xuất hiện đầu tiên ở vị trí thứ mấy,
// với x được nhập từ bàn phím.
// Sắp xếp mảng theo thứ tự tăng dần. In ra mảng sau khi sắp xếp.

int main() {
     int A[100]; // Khởi tạo mảng A với tối đa 100 phần tử
     int n; // Lưu số lượng phần tử mà mảng chứa

     do {
          cout << "Nhập số lượng phần tử: ";
          cin >> n;
     } while(n < 1 || n > 100); // > 0 hoặc <= số lượng phần tử tối đa (100)

     // Nhập từng phần tử của mảng
     for (int i = 0; i < n; i++) {
          cout << "Nhập A[" << i << "] = ";
          cin >> A[i];
     }
     cout << endl;


     // In mảng ra màn hình
     cout << "Mảng bạn vừa nhập là: "; 
     for (int i = 0; i < n; i++) {
          cout << A[i] << " ";
     }
     cout << endl;

     // Cho biết có bao nhiêu phần tử có nội dung là lẻ.
     int dem_pt_le = 0; // Tạo biến đếm số phần tử lẻ
     for (int i = 0; i < n; i++) {
          if (A[i] % 2 != 0) dem_pt_le++;
     }
     cout << "Số lượng phần tử lẻ trong mảng vừa nhập là: " << dem_pt_le << endl;

     // Tính tổng các phần tử là bội số của k, với k được nhập từ bàn phím.
     int k;
     long S_boi_k = 0; // Tổng phần tử là bội của k
     do {
          cout << "Nhập K = ";
          cin >> k;
     } while (k < 1);

     // Lặp qua các phần tử, cộng vào S_boi_k nếu chia hết cho k
     for (int i = 0; i < n; i++) {
          if (A[i] % k == 0) S_boi_k += A[i];
     }

     cout << "Tổng các phần tử là bội của " << k << " là: " << S_boi_k << endl;

     // Cho biết phần tử x xuất hiện đầu tiên ở vị trí thứ mấy,
     int x;
     cout << "Nhập giá trị bạn cần tìm trong mảng: ";
     cin >> x;

     // đặt vị trí ban đầu là -1
     // nếu tìm thấy thì vị trí của x chỉ nằm trong khoảng 0 -> n - 1;
     // nếu tìm xong vẫn là -1 => không tìm thấy
     int vi_tri_x = -1;
     int i = 0;

     // Lặp khi chưa tìm thấy và i < n
     while (vi_tri_x == -1 && i < n) {
          if (A[i] == x) vi_tri_x = i;
          i++;
     }

     if (vi_tri_x == -1) cout << "Không tìm thấy " << x << " trong mảng!";
     else cout << "Vi trí đầu tiên của " << x << " trong mảng là: " << vi_tri_x;
     cout << endl;

     // Sắp xếp mảng theo thứ tự tăng dần. In ra mảng sau khi sắp xếp.
     for (int i = 0; i < n - 1; i++) {
          for (int j = i + 1; j < n; j++) {
               if (A[i] > A[j]) {
                    int tam = A[i];
                    A[i] = A[j];
                    A[j] = tam;
               }
          }
     }

     cout << "Mảng sau khi đã sắp xếp tăng dần: ";
     for (int i = 0; i < n; i++) cout << A[i] << " ";
     cout << endl;

     return 0;
}