#include <iostream>
using namespace std;

class Person {
public:
	void showPerson() const {
		//m_A = 10;
		m_B = 10;
	}

	int m_A;
	mutable int m_B;

	void func(){
		m_A = 10;
	}
};

void test() {
	Person p1;
	p1.showPerson();

	const Person p2;
	//p2.func();
	p2.showPerson();
}

int main17() {
	test();
	system("pause");
	return 0;
}