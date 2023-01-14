// Viết chương trình nhập vào 1 chuỗi
// In ra chuỗi đã đảo theo từng ký tự
//
#include <iostream>

using namespace std;

int main() {
	string s;
	cout << "Nhap 1 chuoi bat ky de thuc hien dao: ";
	getline(cin, s);

	string s_dao;
	for(char v : s) s_dao = v + s_dao;
	
	cout << "Chuoi da thuc hien dao: " << s_dao << endl;

	return 0;
}
