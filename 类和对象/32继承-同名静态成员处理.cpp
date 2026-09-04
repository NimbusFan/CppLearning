#include <iostream>
using namespace std;

class Base
{
public:
    static int m_A;  

    static void func()
    {
        cout << "Base - static func()" << endl;
    }

    static void func(int a)
    {
        cout << "Base - static func(int a)" << endl;
    }
};

int Base::m_A = 100;

class Son :public Base
{
public:
    static int m_A;
    static void func()
    {
        cout << "Son - static void func()" << endl;
    }
};

int Son::m_A = 200;

void test01()
{
    Son s;
    cout << "Son 下 m_A = " << s.m_A << endl;
    cout << "Base 下 m_A = " << s.Base::m_A << endl;

    cout << "Son 下 m_A = " << Son::m_A << endl;
    cout << "Base 下 m_A= " << Son::Base::m_A << endl;
}

void test02()
{
    Son s;
    s.func();
    s.Base::func();

    Son::func();
    Son::Base::func();
    Son::Base::func(100);
}

int main32()
{
    test01();
    test02();

    system("pause");
    return 0;
}