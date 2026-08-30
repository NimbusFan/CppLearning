#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main03() {
	Student s = { "张三", 23, 150 };
	Student* p = &s;
	cout << "姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;

	system("pause");
	return 0;
}