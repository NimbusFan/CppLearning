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

class Son1 :public Base {
	void func() {
		m_A = 10;
		m_B = 20;
		//m_C = 30;
	}
};

class Son2 :protected Base {
	void func() {
		m_A = 10;
		m_B = 20;
		//m_C = 30;
	}
};

class Son3 :private Base {
	void func() {
		m_A = 10;
		m_B = 20;
		//m_C = 30;
	}
};

void test01() {
	Son1 s1;
	s1.m_A = 10;
	//s1.m_B = 20;
	//s1.m_C = 30;
}

void test02() {
	Son2 s2;
	//s2.m_A = 10;
	//s2.m_B = 20;
}

void test03(){
	Son3 s3;
	//s1.m_A = 10;
	//s1.m_B = 20;
	//s1.m_C = 30;
}

int main28() {

	system("pause");
	return 0;
}