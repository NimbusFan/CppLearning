#include <iostream>
using namespace std;

int main03() {
	int arr[10] = { 4, 2, 9, 8, 0, 7, 3, 6, 1, 5 };
	int len = sizeof(arr) / sizeof(arr[0]);

	cout << "排序前的数组为：" << endl;
	
	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	for (int i = 0; i < len - 1; i++) {
		for (int j = 0; j < len - i - 1; j++) {
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	cout << "排序后的数组为：" << endl;

	for (int i = 0; i < 10; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;

	system("pause");
	return 0;
}