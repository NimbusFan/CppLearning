#include <iostream>
using namespace std;

void change(int* p1, int* p2) {
	int temp = *p1;
	*p1 = *p2;
	*p2 = temp;
}

int main06() {
	int a = 10;
	int b = 20;
	change(&a, &b);
	cout << "a = " << a << endl;
	cout << "b = " << b << endl;


	system("pause");
	return 0;
}