#include <iostream>
using namespace std;

int main01() {
	int arr1[5];
	arr1[0] = 1;
	arr1[1] = 2;
	arr1[2] = 3;
	arr1[3] = 4;
	arr1[4] = 5;

	int arr2[5] = { 1, 2, 3, 4, 5 };
	int arr3[] = { 1, 2, 3, 4, 5 };

	cout << "数组所占内存空间为：" << sizeof(arr1) << "字节" << endl;
	cout << "每个元素所占内存空间为：" << sizeof(arr1[0]) << "字节" << endl;
	cout << "数组中的元素个数为：" << sizeof(arr1) / sizeof(arr1[0]) << endl;

	cout << "数组的首地址为：" << (int)arr1 << endl;
	cout << "数组中第一个元素的首地址为：" << (int) & arr1[0] << endl;
	cout << "数组中第三个元素的首地址为：" << (int) & arr1[2] << endl;


	system("pause");
	return 0;
}