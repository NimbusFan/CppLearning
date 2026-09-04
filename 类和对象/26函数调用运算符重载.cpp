#include <iostream>
using namespace std;

class MyPrint {
public:
	void operator()(string test) {
		cout << test << endl;
	}
};

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

void test01() {
	MyPrint myprint;
	myprint("Hello World");
}

void test02() {
	MyAdd myadd;
	int res = myadd(1, 2);
	cout << res << endl;
}

int main26() {
	test01();
	test02();
	system("pause");
	return 0;
}