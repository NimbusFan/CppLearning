#include <iostream>
using namespace std;

int main10() {
	char ch = 'a';
	cout << ch << endl;
	cout << "字符型变量所占内存空间：" << sizeof(char) << "字节" << endl;
	cout << int(ch) << endl;

	system("pause");
	return 0;
}