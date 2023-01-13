// Viết chương trình nhập ma trận vuông cấp n kiểu char
// In ma trận vừa nhập
// Cho biết ma trận có bao nhiêu ký tự "T"
// In ra các phần tử nằm trên đường chéo phụ
// In ký tự lớn nhất trên đường chéo chính
// Kiểm tra có tồn tại hàng đã được sắp xếp sẵn hay không
//
#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cout << "Nhap cap cua ma tran: "; cin >> n;
	
	vector<vector<char>> A(n);
	for(int i = 0; i < n; i++) {
		vector<char> row(n);
		
		for(int j = 0; j < n; j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> row[j];
		}

		A[i] = row;
	}
	cout << endl << "Mang vua nhap: " << endl;
	for (vector<char> r : A) {
		for (char c : r) cout << c << " ";
		cout << endl;
	}

	// Cho biết ma trận có bao nhiêu ký tự "T"
	int amount_t = 0;
	for (vector<char> r:A) {
		for (char c:r) {
			if (c == 'T') amount_t++;
		}
	}
	cout << "Ma tran co " << amount_t << " ky tu \"T\" trong ma tran";

	// In các phần tử trên đường chéo phụ
	cout << "Cac phan tu tren duong cheo phu: " << endl;
	for (int i = 0; i < n; i++) cout << A[n-1-i][i] << " ";
	cout << endl;

	// In ký tự lớn nhất trên đường chéo chính
	cout << "Ky tu lon nhat tren duong cheo trinh la: ";
	char max = A[0][0];
	for (int i = 1; i < n; i++)
		if (int(max) < int(A[i][i])) 
			max = A[i][i];
	cout << max << endl;

	vector<int> S; // Tạo vector lưu index của các dòng được sắp xếp sẵn
	// Kiểm tra các hàng đã được sắp xếp hay chưa
	// Duyệt qua từng hàng
	for (int i = 0; i < n; i++) {
		// Đặt giả thuyết dòng hiện tại đã được sắp xếp
		bool sorted = true;
		// Xét hướng tăng giảm của 2 phần tử đầu tiên
		short trend = (A[i][1] - A[i][0]) / abs(A[i][1] - A[i][0]);
		// dòng tăng dần -> trend = 1
		// dòng giảm dần -> trend = -1
		// dòng không tăng không giảm -> trend = 0

		// Duyệt qua phần tử thứ 3 trở đi trong dãy
		for (int j = 2; j < n; j++) {
			int between_value = A[i][j] - A[i][j-1]; // Lấy giá trị chênh lệch của 2 phần tử liền kề
			short between_trend = between_value / abs(between_value); // Chuyển thành dạng giống với biến trend

			if (trend != between_trend) { // Nếu hướng tăng giảm khác với giá trị trend ban đầu -> dòng không được sắp xếp
				sorted = false; // Đặt lại giả thuyết thành sai
				break; // Dừng xét dòng này
			}
		}

		// Kiểm tra lại giả thuyết -> Nếu đúng thêm index vào vector để lưu
		if (sorted == true) S.push_back(i);
	}

	// In các dòng đã sắp xếp
	if (S.size() == 0) cout << "Khong co dong nao duoc sap xep san!";
	else {
		cout << "Cac dong da duoc sap xep: ";
		for (int v : S) cout << v << " ";
		cout << endl;
	}

	return 0;
}
