#include <iostream>
using namespace std;

int main04() {
	int arr1[2][3];
	int arr2[2][3] = {
		{1, 2, 3},
		{4, 5, 6}
	};
	int arr3[2][3] = { 1, 2, 3, 4, 5, 6 };
	int arr4[][3] = { 1, 2, 3, 4, 5, 6 };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << arr3[i][j];
		}
		cout << endl;
	}

	cout << "二位数组占用内存空间为：" << sizeof(arr3) << "字节" <<endl;
	cout << "二位数组第一行占用内存空间为：" << sizeof(arr3[0]) << "字节" << endl;
	cout << "二位数组第一个元素占用内存空间为：" << sizeof(arr3[0][0]) << "字节" << endl;
	
	cout << "二位数组的行数为：" << sizeof(arr3) / sizeof(arr3[0]) << endl;
	cout << "二位数组的列数为：" << sizeof(arr3[0]) / sizeof(arr3[0][0]) << endl;
	
	cout << "二位数组的首地址为：" << (int)arr3  << endl;
	cout << "二位数组第一行的首地址为：" << (int)arr3[0]  << endl;
	cout << "二位数组第二行的首地址为：" << (int)arr3[1]  << endl;

	cout << "二位数组第一个元素的首地址为：" << (int) & arr3[0][0] << endl;



	system("pause");
	return 0;
}