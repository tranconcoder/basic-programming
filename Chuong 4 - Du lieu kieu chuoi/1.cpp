// Viết chương trình chuyển thập phân thành nhị phân
//
#include <vector>
#include <iostream>

using namespace std;

int main() {
	int n;

	cout << "Nhap so thap phan can chuyen sang nhi phan: ";
	cin >> n;

	string s;
	int r;

	do {
		r = n % 2;
		n = n / 2;
		s = to_string(r) + s;
	} while(n > 1);

	if (n == 1) s = to_string(n) + s; 

	cout << "So da chuyen nhi phan: " << s << endl;

	return 0;
}
