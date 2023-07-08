// Viết chương trình nhập vào chuỗi bất kỳ
// Cho viết từ nào xuất hiện nhiều nhất
//
#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main() {
	string s;
	cout << "Nhap doan van ban bat ky: ";
	getline(cin, s);

	multiset<string> W_ms; // Mỗi lần thêm từ mới nó sẽ tự sắp xếp thứ tự
						// Có thể đếm nhanh phần tử bằng hàm count
	set<string> W_s; 	// Lưu các từ không trùng lặp để đếm bằng hàm count nói trên
						// Tối ưu hóa hiệu năng
	string word; // Lưu từ đang duyệt
	for (char v : s) {
		if (v == ' ') { // Nếu thấy dấu cách thì thêm từ đó vào 2 set và multiset
			W_s.insert(word);
			W_ms.insert(word);
			word = "";
		} else { // Không thì tiếp tục thêm từ hiện tại đến khi thấy dấu space
			word += v;
		}
	}
	// Thêm từ còn tồn tại sau vòng lặp
	W_s.insert(word);
	W_ms.insert(word);

	// Tìm từ xuất hiện nhiều nhất trong danh sách từ đã sắp xếp
	int max = 0;
	string max_word;
	
	// Duyệt qua từng từ không trùng nhau trong set
	// Đếm số lần xuất hiện của nó trong multiset
	for (string v : W_s) {
		if(W_ms.count(v) > max) {
			max = W_ms.count(v);
			max_word = v;
		}
	}

	if (max == 1) cout << "Khong co tu nao xuat hien nhieu nhat!" << endl;
	else {
		cout << "Tu xuat hien nhieu nhat trong chuoi la tu \"" << max_word << "\" voi ";
		cout << max << " lan xuat hien."<< endl;
	}
	 
	return 0;
}