// Viết chương trình nhập 3 số NGUYÊN,
// In ra trung bình cộng và trung bình nhân của 3 số đó.

#include <iostream>
#include <math.h>

using namespace std;

int main() {
	int a, b, c;
	
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	double tb_cong = (a + b + c) / 3.0;
	double tb_nhan = cbrt(a * b * c); 

	cout << "Trung binh cong cua 3 so: " << tb_cong << endl;
	cout << "Trung binh nhan cua 3 so: " << tb_nhan << endl;

	return 0;
}
