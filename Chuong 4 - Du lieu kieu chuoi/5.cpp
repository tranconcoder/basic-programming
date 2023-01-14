// Viết chương trình chuyển đổi nhị phân sang bát phân
//
#include <iostream>
#include <math.h>

using namespace std;

int main() {
	string nhi_phan;
	cout << "He co so 2  = "; cin >> nhi_phan;

	if (stol(nhi_phan) == 0) {
		cout << "====> He co so 8 = 0" << endl;
		return 0;
	}

	// Chuyển nhị phân sang thập phân
	int thap_phan;
	for(int i = 0; i < nhi_phan.size(); i++) 
		if (nhi_phan[i] == '1') 
			thap_phan += pow(2, nhi_phan.size() - 1- i);

	// Chuyển thập phân sang bát phân
	string bat_phan;
	short r;

	while (thap_phan >= 8) {
		r = thap_phan % 8;
		thap_phan /= 8;
		bat_phan = to_string(r) + bat_phan;
	}
	if (thap_phan != 0) bat_phan = to_string(thap_phan) + bat_phan;

	// Xuất kết quả
	cout << "====> He co so 8 = " << bat_phan << endl;

	return 0;
}
