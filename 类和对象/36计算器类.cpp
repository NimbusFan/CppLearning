#include <iostream>
using namespace std;

class AbstractCalculator {
public:
	virtual int getResult() {
		return 0;
	}

	int m_Num1;
	int m_Num2;
};

class addCalculator :public AbstractCalculator {
public:
	int getResult(){
		return m_Num1 + m_Num2;
	}
};

class subCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 - m_Num2;
	}
};

class mulCalculator :public AbstractCalculator {
public:
	int getResult() {
		return m_Num1 * m_Num2;
	}
};

void test() {
	AbstractCalculator* abs = new addCalculator;
	abs->m_Num1 = 10;
	abs->m_Num2 = 20;
	cout << abs->m_Num1 << "+" << abs->m_Num2 << "=" << abs->getResult() << endl;
	delete abs;

	abs = new subCalculator;
	abs->m_Num1 = 10;
	abs->m_Num2 = 20;
	cout << abs->m_Num1 << "-" << abs->m_Num2 << "=" << abs->getResult() << endl;
	delete abs;

	abs = new mulCalculator;
	abs->m_Num1 = 10;
	abs->m_Num2 = 20;
	cout << abs->m_Num1 << "*" << abs->m_Num2 << "=" << abs->getResult() << endl;
	delete abs;
}

int main36() {
	test();
	system("pause");
	return 0;
}