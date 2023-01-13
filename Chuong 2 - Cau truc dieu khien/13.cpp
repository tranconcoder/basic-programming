// Viết chương trình tính e = 1 + x/1! - x^2/2! + x^3*3! .... x^n/n!
#include <iostream>

using namespace std;

int main() {
	int n;
	float x;

	cout << "n = "; cin >> n;
	cout << "x = "; cin >> x;

	double e = 1, pre_top = 1, pre_bottom = 1;
	for (int i = 1; i <= n; i++) {
		pre_top *= x;
		pre_bottom *= i;
		
		double change_value =  pre_top / pre_bottom;

		if (i % 2 != 0) e += change_value;
		else e -= change_value;
		
		cout << e << endl;

	}

	cout << fixed << e;

	return 0;
}
