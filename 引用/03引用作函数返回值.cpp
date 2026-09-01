#include <iostream>
using namespace std;

int& test() {
	static int a = 10;
	return a;
}

int main03() {
	int& ref = test();
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;

	test() = 100;
	cout << "ref = " << ref << endl;
	cout << "ref = " << ref << endl;


	system("pause");
	return 0;
}