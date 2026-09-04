#include <iostream>
using namespace std;

class Base {
public:
	int m_A;
protected:
	int m_B;
private:
	int m_C;
};

class Son :public Base {
	int m_D;
};

void test() {
	cout << "size of :" << sizeof(Son) << endl;
}

int main29() {
	test();
	system("pause");
	return 0;
}