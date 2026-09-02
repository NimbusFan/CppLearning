#include <iostream>
using namespace std;

class Person {
private:
	string m_Name;
	int m_Age = 19;
	string m_Idol;

public:
	void setName(string name) {
		m_Name = name;
	}

	void getName() {
		cout << "姓名是：" << m_Name << endl;
	}

	void setAge(int age) {
		if (age < 0 || age > 150) {
			cout << "年龄不合法" << endl;
			return;
		}
		m_Age = age;
	}

	void getAge() {
		cout << "年龄是：" << m_Age << endl;
	}

	void setIdol(string idol) {
		m_Idol = idol;
	}
};

int main05() {
	Person person1;
	person1.setName("张三");
	person1.getName();
	person1.setAge(23);
	person1.getAge();
	person1.setIdol("fanyunfei");
	system("pause");
	return 0;
}