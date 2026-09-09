#include <iostream>
using namespace std;

template<class NameType, class AgeType = int>
class Person
{
public:
	NameType m_Name;
	AgeType m_Age;
	Person(NameType name, AgeType age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}
	void showPerson()
	{
		cout << "name:" << this->m_Name << endl;
		cout << "age:" << this->m_Age << endl;
	}
};

void test()
{
	Person<string> p1("孙悟空", 188);
	p1.showPerson();
}

int main08()
{
	test();
	system("pause");
	return 0;
}