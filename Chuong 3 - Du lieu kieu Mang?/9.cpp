// Viết ma 2 ma trận có m hàng và n cột 
// Tạo ra ma trận thứ 3 bằng tổng 2 ma trân trên
// Tạo ma trận thứ 4 bằng hiệu 2 ma trận đã tạo
//
#include <iostream>
#include <vector>

using namespace std;

void nhap_ma_tran(vector<vector<int>> &A, char name, int m, int n);
vector<vector<int>> tao_ma_tran(vector<vector<int>> A, vector<vector<int>> B, char c);
void in_ma_tran(vector<vector<int>> A);

int main() {
	int m, n;
	cout << "So hang: "; cin >> m;
	cout << "So cot : "; cin >> n;

	vector<vector<int>> A(m), B(m);

	cout << "Nhap ma tran A: " << endl;
	nhap_ma_tran(A, 'A', m, n);

	cout << "Nhap ma tran B: " << endl;
	nhap_ma_tran(B, 'B', m, n);
	
	vector<vector<int>> C = tao_ma_tran(A, B, '+');
	vector<vector<int>> D = tao_ma_tran(A, B, '-');

	cout << "Ma tran cong: " << endl;
	in_ma_tran(C);

	cout << "Ma tran  tru: " << endl;
	in_ma_tran(D);

	return 0;
}

void nhap_ma_tran(vector<vector<int>> &A,char name, int m, int n) {
	for (int i = 0; i < m; i++) {
		vector<int> row(n);

		for (int j = 0; j < n; j++) {
			cout << name << "[" << i << "][" << j << "] = ";
			cin >> row[j];
		}

		A[i] = row;

		cout << endl;
	}
}

// Lưu ý hai ma trận phải cùng size với nhau
vector<vector<int>> tao_ma_tran(vector<vector<int>> A, vector<vector<int>> B, char c) {
	vector<vector<int>> C;

	for(int i = 0; i < A.size(); i++) {
		vector<int> row;

		for(int j = 0; j < A.front().size(); j++) {
			switch(c) {
				case '+':
					row.push_back(A[i][j] + B[i][j]);
					break;
				case '-':
					row.push_back(A[i][j] - B[i][j]);
					break;
			}
		}

		C.push_back(row);
	}

	return C;
}

void in_ma_tran(vector<vector<int>> A) {
	for(vector<int> r:A) {
		for(int c:r) cout << c << " ";
		cout << endl;
	}
	cout << endl;
}
