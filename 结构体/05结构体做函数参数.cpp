#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

void printStudent1(Student s) {
	s.age = 200;
	cout << "子函数中：" << endl;
	cout << "学生姓名：" << s.name << "学生年龄：" << s.age << "学生分数：" << s.score << endl;
}

void printStudent2(Student* p) {
	p->score = 200;
	cout << "子函数中：" << endl;
	cout << "学生姓名：" << p->name << "学生年龄：" << p->age << "学生分数：" << p->score << endl;
}

int main05() {
	Student s = { "张三", 23, 150 };
	printStudent1(s);
	cout << "主函数中：" << endl;
	cout << "学生姓名：" << s.name << "学生年龄：" << s.age << "学生分数：" << s.score << endl;

	printStudent2(&s);
	cout << "主函数中：" << endl;
	cout << "学生姓名：" << s.name << "学生年龄：" << s.age << "学生分数：" << s.score << endl;

	system("pause");
	return 0;
}