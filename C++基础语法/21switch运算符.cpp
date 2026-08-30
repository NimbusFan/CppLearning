#include <iostream>
using namespace std;

int main21() {
	int score = 0;
	cout << "对电影进行打分(0 ~ 10)" << endl;
	cin >> score;
	cout << "你打的分数是：" << score << endl;

	switch (score) {
	case 10:
		cout << "经典电影" << endl;
		break;
	case 9:
		cout << "好电影" << endl;
		break;
	case 8:
		cout << "好电影" << endl;
		break;
	case 7:
		cout << "一般电影" << endl;
		break;
	case 6:
		cout << "一般电影" << endl;
		break;
	case 5:
		cout << "较差电影" << endl;
		break;
	default:
		cout << "烂片" << endl;
	}

	system("pause");
	return 0;
}