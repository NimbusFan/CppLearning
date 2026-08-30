#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
}s3;

int main01() {
	Student s1;
	s1.name = "张三";
	s1.age = 20;
	s1.score = 100;
	cout << "姓名：" << s1.name << " " << "年龄：" << s1.age << " " << "分数：" << s1.score << " " << endl;


	Student s2 = { "李四", 19, 99 };
	cout << "姓名：" << s2.name << " " << "年龄：" << s2.age << " " << "分数：" << s2.score << " " << endl;

	s3.name = "王五";
	s3.age = 21;
	s3.score = 99;
	cout << "姓名：" << s3.name << " " << "年龄：" << s3.age << " " << "分数：" << s3.score << " " << endl;

	system("pause");
	return 0;
}