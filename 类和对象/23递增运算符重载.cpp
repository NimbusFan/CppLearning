#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream& os, MyInteger myint);
public:
	MyInteger() {
		m_Num = 0;
	}

	MyInteger& operator++() {
		m_Num++;
		return *this;
	}

	MyInteger operator++(int) {
		MyInteger temp = *this;
		m_Num++;
		return temp;
	}

private:
	int m_Num;
};

ostream& operator<<(ostream& os, MyInteger myint) {
	os << myint.m_Num;
	return os;
}
void test01() {
	MyInteger myint;
	cout << ++myint << endl;
	cout << myint << endl;
}

void test02() {
	MyInteger myint;
	cout << myint++ << endl;
	cout << myint << endl;
}

int main23() {
	test01();
	test02();

	system("pause");
	return 0;
}