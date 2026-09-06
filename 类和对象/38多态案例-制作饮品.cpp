#include <iostream>
using namespace std;

class AbstractDrinking {
public:
	virtual void Boil() = 0;
	virtual void Brew() = 0;
	virtual void PourInCup() = 0;
	virtual void PutSomething() = 0;

	void makeDrinking() {
		Boil();
		Brew();
		PourInCup();
		PutSomething();
	}
};

class Coffee :public AbstractDrinking {
	virtual void Boil() {
		cout << "煮景田" << endl;
	}

	virtual void Brew() {
		cout << "冲泡咖啡" << endl;
	}

	virtual void PourInCup() {
		cout << "倒入杯中" << endl;
	}

	virtual void PutSomething() {
		cout << "加入糖和牛奶" << endl;
	}
};

void doWork(AbstractDrinking* abs) {
	abs->makeDrinking();
	delete abs;
}

void test() {
	doWork(new Coffee);
}

int main38() {
	test();
	system("pause");
	return 0;
}