#include <iostream>
using namespace std;

class Base {
public:
	int m_A = 100;

	void func() {
		cout << "Base下的func()" << endl;
	}

	void func(int a) {
		cout << "Base下的func(int a)" << endl;
	}
};

class Son :public Base {
public:
	int m_A = 200;

	void func() {
		cout << "Son下的func()" << endl;
	}
};

void test() {
	Son s;
	cout << "Son下的m_A：" << s.m_A << endl;
	cout << "Base下的m_A：" << s.Base::m_A << endl;

	s.func();
	s.Base::func();
	s.Base::func(1);
}

int main31() {
	test();
	system("pause");
	return 0;
}