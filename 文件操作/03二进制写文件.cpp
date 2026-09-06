#include <iostream>
using namespace std;
#include <fstream>

class Person {
public:
	char m_Name[64];
	int m_Age;
};

void test() {
	ofstream ofs;
	ofs.open("person.txt", ios::out | ios::binary);
	Person p = {"张三", 18};
	ofs.write((const char*)&p, sizeof(p));
	ofs.close();
}

int main03() {
	test();
	system("pause");
	return 0;
}