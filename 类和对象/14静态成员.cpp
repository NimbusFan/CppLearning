#include <iostream>
using namespace std;

class Person {
public:
	static int m_A;

	static void func1() {
		m_A = 100;
		cout << "静态成员函数1调用静态成员变量m_A = " << m_A << endl;

	}

private:
	static int m_B;

	static void func2() {
		cout << "静态成员函数2调用静态成员变量m_B = " << m_B << endl;
	}
};
int Person::m_A = 10; // 静态成员变量必须在类外初始化
int Person::m_B = 20; // 静态成员变量必须在类外初始化

void test() {
	Person p1;
	cout << "Person::m_A = " << Person::m_A << endl;
	cout << "p1.m_A = " << p1.m_A << endl;

	Person p2;
	p2.m_A = 20;
	cout << "p1.m_A = " << p1.m_A << endl;
	//cout << "p1.m_B = " << p1.m_B << endl;

	Person::func1();
	p1.func1();
	cout << "p2.m_A = " << p1.m_A << endl;
	//Person::func2();
	//p1.func2();
}

int main14() {
	test();

	system("pause");
	return 0;
}