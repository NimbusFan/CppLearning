#include <iostream>
#include <fstream>
using namespace std;

void test() {
	ofstream ofs;
	ofs.open("test.txt", ios::out);
	
	ofs << "姓名：张三" << endl;
	ofs << "性别：男" << endl;
	ofs << "年龄：18" << endl;

	ofs.close();
}

int main01() {
	test();
	system("pause");
	return 0;
}