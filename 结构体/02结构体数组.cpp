#include <iostream>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

int main02() {
	struct Student stuArray[3] = {
		{"张三", 18, 80},
		{"李四", 19, 90},
		{"王五", 20, 100 }
	};

	stuArray[1].name = "赵六";
	stuArray[1].age = 23;
	stuArray[1].score = 150;

	for (int i = 0; i < 3; i++) {
		cout << "姓名：" << stuArray[i].name
			<< "年龄：" << stuArray[i].age
			<< "分数：" << stuArray[i].score
			<< endl;
	}

	system("pause");
	return 0;
}