#include <iostream>
using namespace std;

int main27() {
	for (int num = 0; num <= 100; num++) {
		if (num % 10 == 7 || num / 10 == 7 || num % 7 == 0) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << num << endl;
		}
	}
	system("pause");
	return 0;
}