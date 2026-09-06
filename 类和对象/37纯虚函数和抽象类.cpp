#include <iostream>
using namespace std;

class Base {
public:
	virtual void func() = 0;
};

class Son :public Base {
public:
	void func() {
		cout << "Son::func调用" << endl;
	}
};

void test() {
	Base* base = new Son;
	base->func();
	delete base;
}

int main37() {
	test();
	system("pause");
	return 0;
}