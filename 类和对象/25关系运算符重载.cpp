#include <iostream>
using namespace std;

class Person {
public:
	string m_Name;
	int m_Age;

	Person(string name, int age) {
		m_Name = name;
		m_Age = age;
	}

	bool operator==(Person p) {
		if (m_Name == p.m_Name && m_Age == p.m_Age) {
			return true;
		}
		return false;
	}

	bool operator!=(Person p) {
		if (m_Name == p.m_Name && m_Age == p.m_Age) {
			return false;
		}
		return true;
	}
};

void test() {
	Person p1("Tom", 18);
	Person p2("Jerry", 18);

	if (p1 == p2) {
		cout << "p1和p2是同一个人" << endl;
	}
	else {
		cout << "p1和p2不是同一个人" << endl;
	}

	if (p1 != p2) {
		cout << "p1和p2不是同一个人" << endl;
	}
	else {
		cout << "p1和p2是同一个人" << endl;
	}

}

int main25() {
	test();
	system("pause");
	return 0;
}