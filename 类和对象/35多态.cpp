#include <iostream>
using namespace std;

class Animal {
public:
	virtual void speak() {
		cout << "动物在叫" << endl;
	}
};

class Cat :public Animal {
public:
	void speak() {
		cout << "小猫在叫" << endl;
	}
};

class Dog :public Animal {
public:
	void speak() {
		cout << "小狗在叫" << endl;
	}
};

void doSpeak(Animal& animal) {
	animal.speak();
}

void test() {
	Cat cat;
	Dog dog;
	doSpeak(cat);
	doSpeak(dog);
}

int main35() {
	test();
	system("pause");
	return 0;
}