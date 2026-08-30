#include <iostream>
using namespace std;

int main8() {
	short num1 = 10;
	cout << "short占用的内存空间为：" << sizeof(num1) << "字节" << endl;

	int num2 = 10;
	cout << "int占用的内存空间为：" << sizeof(num2) << "字节" << endl;

	long num3 = 10;
	cout << "long占用的内存空间为：" << sizeof(num3) << "字节" << endl;

	long long num4 = 10;
	cout << "long long占用的内存空间为：" << sizeof(num4) << "字节" << endl;
	system("pause");
	return 0;
}