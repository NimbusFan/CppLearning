#include <iostream>
using namespace std;

int main01() {
	int a = 10;
	int* p = &a;
	cout << p << endl;
	cout << &a << endl;
	cout << *p << endl;
	cout << sizeof(int*) << endl;
	cout << sizeof(p) << endl;


	system("pause");
	return 0;
}