#include <iostream>
using namespace std;

class Animal {
public:
	int m_Age;
};

class Sheep :virtual public Animal {};
class Tuo :virtual public Animal {};

class SheepTuo :public Sheep, public Tuo {};

void test() {
	SheepTuo sheeptuo;
	sheeptuo.Sheep::m_Age = 18;
	sheeptuo.Tuo::m_Age = 28;

	cout << "sheeptuo.Sheep::m_Age = " << sheeptuo.Sheep::m_Age << endl;
	cout << "sheeptuo.Tuo::m_Age = " << sheeptuo.Tuo::m_Age << endl;
	cout << "sheeptuo.m_Age = " << sheeptuo.m_Age << endl;
}

int main34() {
	test();

	system("pause");
	return 0;
}