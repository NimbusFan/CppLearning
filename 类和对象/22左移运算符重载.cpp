#include <iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& os, Person& p);
public:
	Person(int a) {
		m_A = a;
	}
private:
	int m_A;
};

ostream& operator<<(ostream& os, Person & p) {
	os << "m_A = " << p.m_A << endl;
	return os;
}

void test() {
	Person p(10);
	cout << p;
}

int main22() {
	test();
	system("pause");
	return 0;
}