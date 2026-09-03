//#include <iostream>
//using namespace std;
//
//class Person {
//public:
//	int a;
//	static int b;
//	void func1() {};
//	static void func2() {};
//};
//int Person::b = 10;
//
//int main() {
//	Person p;
//	cout << "size of Person: " << sizeof(p) << endl;
//	system("pause");
//	return 0;
//}

#include <iostream>
using namespace std;

class Person {
public:
	Person(int age) {
		this->age = age;
	}

	Person& PersonAddAge(Person p) {
		this->age += p.age;
		return *this;
	}

	int age;
};

int main15() {
	Person p1(10);
	cout << "p1.age = " << p1.age << endl;

	Person p2(10);
	p1.PersonAddAge(p2).PersonAddAge(p2).PersonAddAge(p2);
	cout << "p1.age = " << p1.age << endl;

	system("pause");
	return 0;
}