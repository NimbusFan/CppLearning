#include <iostream>
using namespace std;

class Phone {
public:
	Phone(string pname): m_PName(pname){
		cout << "Phone类的构造函数" << endl;
	}

	~Phone() {
		cout << "Phone类的析构函数" << endl;
	}
	string m_PName;
};

class Person {
public:
	Person(string name, string phone) :m_Name(name), m_Phone(phone) {
		cout << "Person类的构造函数" << endl;
	}

	~Person() {
		cout << "Person类的析构函数" << endl;
	}

	string m_Name;
	Phone m_Phone;
};

void test() {
	Person p("周杰伦", "华为");
}

int main13() {
	test();
	system("pause");
	return 0;
}