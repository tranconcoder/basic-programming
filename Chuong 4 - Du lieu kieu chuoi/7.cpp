// Viết chương trình nhập vào chuỗi ký tự
// In ra chuỗi đã đảo theo từng từ
//
#include <iostream>

using namespace std;

int main() {
	string s;
	cout << "Nhap chuoi bat ky de dao tu: ";
	getline(cin, s);

	string s_dao_tu;
	string word;
	for (char v : s)
		if (v == ' ') {
			s_dao_tu = word + " " + s_dao_tu;
			word = "";
		} else word += v;

	s_dao_tu = word + " " + s_dao_tu;

	cout << "Chuoi sau khi dao tu: " << s_dao_tu << endl;

	return 0;
}
