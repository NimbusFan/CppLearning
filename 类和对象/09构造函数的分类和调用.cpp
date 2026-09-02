#include <iostream>
using namespace std;

class Person {
public:

	Person() {
		cout << "无参构造" << endl;
	}

	Person(int age) {
		cout << "有参构造" << endl;
		m_age = age;
	}

	Person(const Person& p) {
		cout << "拷贝构造" << endl;	
		m_age = p.m_age;
	}

	int m_age;
};

int main09() {
	Person p1; 
	Person p2(10);
	Person p3(p2);

	//Person p2 = Person(10);
	//Person p3 = Person(p2);

	//Person p4 = 10;
	//Person p5 = p4;
	system("pause");
	return 0;
}