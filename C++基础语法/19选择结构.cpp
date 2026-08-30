#include <iostream>
using namespace std;

int main19() {
	int score = 0;
	cout << "输入你的高考成绩" << endl;
	cin >> score;
	if (score >= 600) {
		cout << "恭喜被清华大学录取！" << endl;
		if (score >= 680) {
			cout << "老师点名要你做驸马爷！女生是新一届清华校花！年薪150w！" << endl;
		}
		else if (score >= 650) {
			cout << "老师点名要你进入他的外企公司！年薪80w！" << endl;

		}
		else {
			cout << "学校要你毕业留校，年薪只有60w......" << endl;
		}
	}
	else if(score >= 500) {
		cout << "恭喜被北京大学录取！" << endl;
	}
	else if (score >= 400) {
		cout << "恭喜被上海交通大学录取!" << endl;
	}
	else {
		cout << "很遗憾，你被华东师范大学录取了......" << endl;
	}
	system("pause");
	return 0;
}