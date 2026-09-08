#include <iostream>
using namespace std;

template<typename T>
void myswap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

int main01() {
	double a = 10;
	double b = 20;

	//myswap(a, b);
	myswap<double>(a, b);

	cout << "a = " << a << endl;
	cout << "b = " << b << endl;

	system("pause");
	return 0;
}