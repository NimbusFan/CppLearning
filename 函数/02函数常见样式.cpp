#include <iostream>
using namespace std;

//无参无返
void test01() {
	cout << "This is Test 01" << endl;
}

//无参有返
int test02() {
	cout << "This is Test 02" << endl;
	return 02;
}

//有参无返
void test03(int num1) {
	cout << "This is Test 03, num1 = " << num1 << endl;
}

//有参有返
int test04(int num1) {
	cout << "This is Test 04" << endl;
	return num1;
}

int main02() {
	test01();
	
	int a = test02();
	cout << "a = " << a << endl;

	test03(03);

	int b = test04(04);
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}