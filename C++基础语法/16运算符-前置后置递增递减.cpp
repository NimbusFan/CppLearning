#include <iostream>
using namespace std;

int main16() {
	//前置递增
	int num1 = 10;
	int num2 = ++num1 * 10;

	cout << "num1 = " << num1 << endl;
	cout << "num2 = " << num2 << endl;

	//后置递增
	int num3 = 10;
	int num4 = num3++ * 10;

	cout << "num3 = " << num3 << endl;
	cout << "num4 = " << num4 << endl;

	system("pause");
	return 0;
}