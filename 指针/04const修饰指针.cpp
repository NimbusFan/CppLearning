#include <iostream>
using namespace std;

int main04() {
	int a = 10;
	int b = 10;
	
	const int* p1 = &a;
	//*p1 = 100;常量指针，不可更改指向的值
	p1 = &b;

	int* const p2 = &a;
	*p2 = 100;
	//p2 = &b;指针常量，不可更改指针指向

	const int* const p3 = &a;
	//既修饰常量又修饰指针，指针指向和指针指向的值都不可更改
	//p3 = &b;
	//*p3 = 100;

	system("pause");
	return 0;
}