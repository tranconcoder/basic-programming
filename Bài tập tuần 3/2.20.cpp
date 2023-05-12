#include <iostream>

using namespace std;
// Chương 2 - Bài 20
// Viết chương trình tính số hạng thứ n của dãy Fibonacci. Hướng dẫn: Dãy Fibonacci
// là dãy số gồm các số hạng F(n) vói F(n) = F(n - 1) + F(n - 2) và F(1) = F(2) = 1
int main() {
     int n;
     do {
          cout << "Bạn muốn hiển thị số Fibonacci thứ mấy? Nhập kết quả: ";
          cin >> n;
     } while (n < 1); // Phải lớn hơn hoặc bằng 1

     int fn = 1; // Lưu số fibonacii thứ N (hiện tại)
     int fn1 = 1; // Lưu số fibonacci thứ N - 1
     int fn2 = 1; // Lưu số fibonacci thứ N - 2

     // i = 3 vì số fibo thứ 1 và 2 đều là 1 và trùng với biến fn đã khởi tạo,
     // không cần xét trường hợp đó
     for (int i = 3; i <= n; i++) {
          fn = fn1 + fn2; // Cập nhật số Fibonacci mới

          // Cập nhật lại các cố fibonacci trước đó
          fn2 = fn1;
          fn1 = fn;
     }

     cout << "Số Fibonacci thứ " << n << " là: " << fn << endl;

     return 0;
}