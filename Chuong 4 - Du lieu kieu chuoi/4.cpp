// Viết chương trình chuyển đổi bát phân sang thập lục phân
// 
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
	string batphan;
	cout << "Bat phan = ";
	getline(cin, batphan);

	if (stoi(batphan) == 0) {
		cout << "===> Thap luc phan = 0" << endl;
		return 0;
	}
	// Bát phân sang thập phân
	int thapphan;
	for(int i = 0; i < batphan.size(); i++) {
		thapphan += (int(batphan[i]) - 48) * pow(8, batphan.size() - 1 - i);
	}

	// Thập phân sang thập lục phân
	string thaplucphan;
	vector<char> A = { 'A', 'B', 'C', 'D', 'E', 'F' };
	int r;

	while(thapphan > 15) {
		r = thapphan % 16;
		thapphan /= 16;
		if (r >= 10) thaplucphan = A[r - 10] + thaplucphan;
		else thaplucphan = to_string(r) + thaplucphan;
	}
	if (thapphan != 0) {
		if (thapphan >= 10) thaplucphan = A[thapphan - 10] + thaplucphan;
		else thaplucphan = to_string(thapphan) + thaplucphan;
	}

	cout << "===> Thap luc phan = " << thaplucphan << endl;

	return 0;
}

