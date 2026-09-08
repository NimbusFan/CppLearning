#include <iostream>
using namespace std;

template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void func()
{
	cout << "func()调用" << endl;
}

void test()
{
	int a = 10;
	int b = 20;
	char c = 'f';
	mySwap(a, b);
	//mySwap(a, c);


	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	func<int>();
	//func();
}

int main02() {
	test();
	system("pause");
	return 0;
}