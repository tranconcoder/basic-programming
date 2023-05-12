#include <iostream>

using namespace std;
// Chương 2 - Bài 24
// Viết chương trình nhập vào lần lượt các số thực,
// quá trình nhập kết thúc khi nhập số thực là 0.
// Cho biết trị trung bình của các số đã nhập.
int main() {
     int dem = 0; // Khởi tạo biến đếm để tính trung bình cộng
     double tong = 0; // Khởi tạo biến tổng để tính trung bình cộng

NhapSoThuc: // Tạo nhãn nhập số thực để lặp lại công việc này
     float tam; // Khởi tạo biến tạm --> lưu giá trị mỗi lần nhập
     cout << "Nhập số thực bất kỳ: ";
     cin >> tam;

     tong += tam; // Công biến tạm và tổng
     dem++; // Tăng biến đếm lên 1

     // Nếu nhập số khác 0 thì thực hiện lại công việc
     if (tam != 0) goto NhapSoThuc;
     dem--; // Trừ đi 1 --> để loại bỏ số 0 đã được thêm khi kết thúc

     double tbc = tong / dem;

     cout << "Trung bình công của các số bạn đã nhập là: " << tbc << endl;

     return 0;
}