#include <iostream>

using namespace std;
// Chương 2 - Bài 19
// Viết chương trình nhập vào 1 số nguyên dương
// in ra ước số lẻ lớn nhất của nó.
// Ví dụ ta nhập số 60 thì in ra là 15

int main() {
     // Khai báo và nhập biến N
     int n;
     do {
          cout << "Nhập số nguyên N: ";
          cin >> n;
     } while (n < 1); // Nếu N nhỏ hơn 1 thì yêu cầu nhập lại
     
     int ucln; // Khởi tạo biến UCLN -> Lưu giá trị đề bài yêu cầu
     bool found = false; // Biến cho biết đã tìm thấy UCLN hay chưa (mặc định là chưa - false)

     // Cho vòng lặp chạy từ 1 -> N
     // Nếu N % i == 0 thì đặt uoc = (N / i), hok thì thui
     // uoc là ước số của N do N / uoc = i
     // và nếu uoc là số lẻ thì đặt biến found là true => dừng vòng lặp
     int i = 2; //Bắt đầu từ 2 vì nếu n / 1 sẽ ra chính nó
     while(found == false && i <= n) {
          if (n % i == 0) {
               int uoc = n / i; // Tìm thấy ước của N
               if (uoc % 2 != 0) { // Kiểm tra ước đó có lẻ hay không
                    found = true; // Đã tìm thấy ước lẻ lớn nhất
                    ucln = uoc; // Gán uoc đã tìm được cho ucln
               }
          }

          i++; // Tăng i lên sau mỗi vòng lặp
     }     

     cout << "Ước lẻ lớn nhất của " << n << " là: " << ucln << endl;

     return 0;
}