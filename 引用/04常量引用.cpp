#include <iostream>
using namespace std;

void showValue( const int& v) {
	//v = 1000;
	cout << "v= " << v << endl;
}

int main04() {
	int a = 10;
	showValue(a);
	cout << "a = " << a << endl;
	system("pause");
	return 0;
}