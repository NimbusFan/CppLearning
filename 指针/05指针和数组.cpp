#include <iostream>
using namespace std;

int main05() {
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	cout << "数组第一个元素是：" << arr[0] << endl;
	
	int* p = arr;
	cout << "用指针访问数组：" << endl;
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;
	}
	system("pause");
	return 0;
}