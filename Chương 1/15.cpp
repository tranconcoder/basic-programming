// Viết chương trình nhập vào 3 số a, b,c là 3 chiều dài 3 cạnh của tam giác
// Hãy tính chu vi và diện tích tam giác đó

#include <cmath>
#include <iostream>

using namespace std;

int main() {
	double a, b, c;
	cout << "a = "; cin >> a;
	cout << "b = "; cin >> b;
	cout << "c = "; cin >> c;

	double cv = a + b + c;
	const double p = cv / 2;
	double dt = sqrt(p*(p-a)*(p-b)*(p-c));
	
	cout << "Chu vi cua tam giac: " << cv << endl;
	cout << "Dien tich cua tam giac: " << dt << endl;

	return 0;
}
