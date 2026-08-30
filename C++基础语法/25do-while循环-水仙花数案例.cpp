#include <iostream>
using namespace std;

int main25() {
	int count = 100;
	int num1 = 0;
	int num2 = 0;
	int num3 = 0;
	
	do {
		num1 = count / 100;
		num2 = count / 10 % 10;
		num3 = count % 10;

		if ((num1*num1*num1 + num2*num2*num2 + num3*num3*num3) == count) {
			cout << count << endl;
		}
	} while (++count < 1000);

	system("pause");
	return 0;
}