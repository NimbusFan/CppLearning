#include <iostream>
using namespace std;

int main9() {

	float f1 = 3.1415926f;
	double f2 = 3.1415926;
	cout << "f1 = " << f1 << endl;
	cout << "f2 = " << f2 << endl;

	cout << "float占用空间为" << sizeof(float) << "字节" << endl;
	cout << "double占用空间为" << sizeof(double) << "字节" << endl;

	float f3 = 3e2;
	cout << "f3:" << f3 << endl;
	float f4 = 3e-2;
	cout << "f4:" << f4 << endl;



	system("pause");
	return 0;
}