#include <iostream>
using namespace std;

int main02() {
	int arr[5] = { 1, 2, 3, 4, 5 };
	int start = 0;
	int end = sizeof(arr) / sizeof(arr[0]) - 1;
	do {
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;
		start++;
		end--;
	} while (start < end);

	cout << "数组逆置后为：" << endl;

	for (int i = 0; i < 5; i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	system("pause");
	return 0;
}