#include <iostream>
using namespace std;
#include "workerManager.h"

int main() {
	WorkerManager wm;
	int choice = 0;
	while (true) {
		wm.show_Menu();
		cout << "输入您的选择：" << endl;
		cin >> choice;

		switch (choice) {
		case 0://退出系统
			wm.exitSystem();
			break;
		case 1://增加职工
			wm.add_Emp();
			break;
		case 2://显示职工
			wm.show_Emp();
			break;
		case 3://删除职工
			break;
		case 4://修改职工
			break;
		case 5://查找职工
			break;
		case 6://排序职工
			break;
		case 7://清空文档
			break;
		default:
			system("cls");
			break;
		}
	}

	system("pause");
	return 0;
}