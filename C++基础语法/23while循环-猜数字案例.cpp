#include <iostream>
using namespace std;

int main23() {
	srand((unsigned int)time(NULL));
	int num = rand() % 100 + 1;
	int val = 0;
	int count = 0;

	cout << "猜数字游戏开始" << endl;
	cin >> val;

	while (num != val && count < 5) {
		count++;

		if (num < val) {
			cout << "猜大了" << endl;
		}
		else {
			cout << "猜小了" << endl;
		}
		cin >> val;
	}
	if (num ==val) {
		cout << "回答正确" << endl;
	}
	else {
		cout << "猜错次数太多，游戏失败" << endl;
	}


	system("pause");
	return 0;
}