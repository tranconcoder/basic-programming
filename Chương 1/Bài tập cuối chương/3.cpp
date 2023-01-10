// Viết chương trình nhập vào 4 giá trị thuộc kiểu: nguyên, nguyên dài, thực và ký tự
// In 4 giá trị đó ra màn hình.
#include <iostream>

using namespace std;

int main() {
	int nguyen;
	long int nguyen_dai;
	double thuc;
	char ky_tu;

	cout << "Nhap so nguyen: "; 	cin >> nguyen;
	cout << "Nhap so nguyen dai: "; cin >> nguyen_dai;
	cout << "Nhap so thuc: "; 		cin >> thuc;
	cout << "Nhap ky tu: "; 		cin >> ky_tu;


	cout << endl << "Cac gia tri da nhap lan luot la: \n";
	cout << nguyen << endl << nguyen_dai << endl;
	cout << thuc << endl << ky_tu << endl;

	return 0;
}
