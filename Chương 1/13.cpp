// Viết chương trình nhập vào năm sinh của một người
// In ra tuổi của người đó

#include <iostream>
#include <ctime> // Dùng thư viện ctime để lấy năm hiện tại tự động

using namespace std;

int main() {
	// Lấy giá trị năm hiện tại tự động
	time_t now = time(NULL); // now -> số giây tính từ năm 1970 tới nay
	int current_year = 1970 + (now / 60 / 60 / 24 / 365);

	int y;
	cout << "Nhap nam sinh cua ban: ";
	cin >> y;

	cout << "Nam nay ban " << current_year - y << " tuoi!" << endl;
	return 0;
}
