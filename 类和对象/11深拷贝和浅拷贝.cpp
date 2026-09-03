#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "无参构造函数" << endl;
	}

	Person(int age, int height) {
		cout << "有参构造函数" << endl;
		m_Age = age;
		m_Height = new int(height);
	}

	Person(const Person& p) {
		cout << "拷贝构造函数" << endl;
		m_Age = p.m_Age;

		// 如果这里不定义拷贝构造函数，直接用系统默认的构造函数：m_Height = p.m_Height;
		// 会造成浅拷贝，两个对象的m_Height指向同一块内存，析构时会出现重复释放内存的问题
		m_Height = new int(*p.m_Height);  
	}

	~Person() {
		cout << "析构函数" << endl;
		delete m_Height;
		m_Height = nullptr;
	}

	int m_Age;
	int* m_Height;
};

void test() {
	Person p1(23, 180);
	cout << "p1的身高为：" << p1.m_Age << "，身高为：" << *p1.m_Height << endl;

	Person p2(p1);
	cout << "p2的身高为：" << p2.m_Age << "，身高为：" << *p2.m_Height << endl;
}

int main11() {
	test();
	system("pause");
	return 0;
}