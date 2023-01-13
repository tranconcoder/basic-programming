// Nhập mảng vuông cấp n kiểu số nguyên
// In mảng vừa nhập
// In các phần tử nằm trên đường biên của ma trận
// Cho biết vị trí của phần tử nhỏ nhất
// Cho biết hàng nào có tổng lớn nhất
// Tính giá trị trung bình của phần tử dương trong ma trận
//
#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main() {
	int n;
	cout << "n = "; cin >> n;

	vector<vector<int>> A(n);
	for (int i = 0; i < A.size(); i++) {
		vector<int> row(n);

		for (int j = 0; j < row.size(); j++) {
			cout << "A[" << i << "][" << j << "] = ";
			cin >> row[j];
		}

		A[i] = row;
	}

	cout << "Ma tran vua nhap: " << endl;
	for (vector<int> r : A) {
		cout << setw(10);
		for (int c : r) cout << c << " ";
		cout << endl;
	}

	// In các phần tử trên đường biên của ma trận
	vector<int> B; // Tạo vector lưu các phần tử trên đường biên
	for(int i = 0; i < A.size() - 1; i++) B.push_back(A[0][i]); // Biên trên
	for(int i = 0; i < A.size() - 1; i++) B.push_back(A[i][n-1]); // Biên phải
	for(int i = 0; i < A.size() - 1; i++) B.push_back(A[n-1][n-1-i]); // Biên dưới
	for(int i = 0; i < A.size() - 1; i++) B.push_back(A[n-i-1][0]); // Biên dưới
	
	for(int v: B) cout << v << " ";
	cout << endl;

	// Cho biết phần tử nhỏ nhất nằm ở vị trí nào
	int min = A[0][0];
	vector<short> P = {0,0};
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if (A[i][j] < min) {
				min = A[i][j];
				P[0] = i;
				P[1] = j;
			}
		}
	}
	
	cout << "So nho nhat trong ma tran nam o vi tri: " << P[0] + 1 << ", "<< P[1] + 1 << endl;

	// Cho biết hàng nào có tổng lớn nhất
	int max = 0;
	short max_index = 0;
	
	for(int i = 0; i < n; i++) {
		int total = 0;
		
		for (int v: A[i]) total += v;

		if (total > max) {
			max = total;
			max_index = i;
		}
	}
	cout << "Hang co tong lon nhat la: " << max_index + 1 << endl;

	// Tính giá trị trung bình phần tử dương trong mảng
	long int total_avg = 0;
	short amount_avg = 0;
	for(vector<int> r:A) {
		for(int c:r) {
			if (c > 0) {
				total_avg += c;
				amount_avg++;
			}
		}
	}
	double avg = total_avg / amount_avg;
	cout << "Gia tri trung binh cua phan tu duong trong ma tran la: " << avg << endl;

	return 0;
}
