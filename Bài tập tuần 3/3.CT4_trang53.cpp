#include <iostream>

using namespace std;

// Viết chương trình nhập vào mảng 1 chiều gồm n phần tử kiểu số thực.
// In ra mảng vừa nhập.
// Thêm 1 phần tử x vào tại vị trí vt, với x và vt nhập từ bàn phím.
// Cho biết phần tử lớn nhất xuất hiện sau cùng ở vị trí thứ mấy.
// Tính tích các phần tử dương nằm ở các vị trí lẻ.
// Xóa tất cả các phần tử có nội dung là y, với y nhập từ bàn phím.
int main() {
     // Viết chương trình nhập vào mảng 1 chiều gồm n phần tử kiểu số thực.
     float Arr[100];
     int n;

     do {
          cout << "Nhập số lượng phẩn tử của mảng: ";
          cin >> n;
     } while (n < 1 || n > 100); // n >= 1 và n <= số phần tử tối đa (100)

     for (int i = 0; i < n; i++) {
          cout << "Arr[" << i << "] = ";
          cin >> Arr[i];
     }
     cout << endl;

     // In mảng vừa nhập
     cout << "Mảng bạn vừa nhập là: ";
     for (int i = 0; i < n; i++) {
          cout << Arr[i] << " ";
     }
     cout << endl;

     // Thêm 1 phần tử x vào tại vị trí vt, với x và vt nhập từ bàn phím.
     float x;
     int vt;
     cout << "Nhập giá trị x cần thêm vào mảng: ";
     cin >> x;
     do {
          cout << "Nhập vị trí để thêm: ";
          cin >> vt;
     } while (vt < 0 || vt > n); // Chỉ cho phép thêm ở vị trí 0 -> n
     
     // Dịch chuyển các phần tử từ vt -> n - 1 sang phải
     for (int i = n; i >=  vt + 1; i--) {
          Arr[i] = Arr[i - 1]; 
     }
     Arr[vt] = x;
     n++; // Tăng n sau khi đã thêm phần tử mới 

     cout << endl << "Mảng sau khi đã thêm: ";
     for (int i = 0; i < n; i++) cout << Arr[i] << " ";
     cout << endl;

     // Cho biết phần tử lớn nhất xuất hiện sau cùng ở vị trí thứ mấy.
     // Khởi tạo biến lưu giá trị phần tử lớn I trong mảng
     // (mặc định là giá trị của phần tử 0)
     int max = Arr[0];
     // Khởi tạo biến lưu vị trí phần tử lớn I trong mảng (mặc định là 0)
     int vt_max = 0;
     
     for (int i = 1; i < n; i++) {
          // Nếu phát hiện số > max thì gán số đó là max mới
          if (Arr[i] > max) max = Arr[i];

          // Nếu phát hiện số >= mã thì cập nhật vị trí
          // ==> đảm bảo luôn là max cuối cùng lớn I theo yêu cầu
          if (Arr[i] >= max) vt_max = i;
     }

     cout << "Phần tử lớn nhất (" << max << ") xuất hiện sau cùng ở vị trí: " << vt_max << endl;

     // Tính tích các phần tử dương nằm ở các vị trí lẻ.
     long T = 1;
     for (int i = 1; i < n; i += 2) {
          if (Arr[i] > 0) T *= Arr[i];
     }
     cout << "Tích các phần tử dương trên vị trí lẻ là: " << T << endl;

     // Xóa tất cả các phần tử có nội dung là y, với y nhập từ bàn phím.
     int y;
     cout << "Nhập giá trị cần xóa khỏi mảng: ";
     cin >> y;

     int i = 0;
     while (i < n) {
          if (Arr[i] == y) { // nếu arr[i] = y ==> thực hiện xóa
               // di chuyển tất cả phần tử sau i sáng trái 1 đơn vị
               // để lấp đi khoảng trống đã xóa
               for (int j = i; j < n; j++) Arr[j] = Arr[j + 1];

               Arr[n - 1] = 0; // Xóa giá trị phần tử cuối
               
               n--; // giảm số lượng phần tử đang chứa
          }

          i++; // Tăng i sau mỗi lần lặp
     }

     cout << "Mảng sau khi đã xóa các phần tử trùng với " << y << " là: ";
     for (int i = 0; i < n; i++) cout << Arr[i] << " ";

     return 0;
}