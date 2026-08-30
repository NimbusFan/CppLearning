#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

struct Teacher {
	int id;
	string name;
	int age;
	struct Student stu;
};

int main04() {
	Teacher t = {
		001, "老吴", 20,
		{"老李", 20, 150}
	};

	cout << "老师姓名：" << t.name << endl
	     << "老师ID：" << t.id << endl
	     << "老师年龄：" << t.age << endl
	     << "学生姓名：" << t.stu.name  << endl
	     << "学生年龄：" << t.stu.age << endl
	     << "学生分数：" << t.stu.score << endl;

	system("pause");
	return 0;
}