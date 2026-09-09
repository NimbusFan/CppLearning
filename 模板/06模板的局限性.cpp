#include <iostream>
using namespace std;
#include<string>

class Person
{
public:
    Person(string name, int age)
    {
        this->m_Name = name;
        this->m_Age = age;
    }
    string m_Name;
    int m_Age;
};

template<class T>
bool myCompare(T& a, T& b)
{
    // (a == b)能判断整型、浮点型数据是否相等，但是没有办法判断Person类型与Person类型相等比较，
    // 可以通过==运算符重载，来判断Person类型的p1和Person类型的p2是否相等
    if (a == b) 
    {
        return true;
    }
    else
    {
        return false;
    }
}

//template<>表示这是一个模板重载的版本，Person表示这是重载的person的模板
template<> bool myCompare(Person& p1, Person& p2)     
{
    if (p1.m_Name == p2.m_Name && p1.m_Age == p2.m_Age)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void test01()
{
    int a = 10;
    int b = 20;

    bool ret = myCompare(a, b);

    if (ret)
    {
        cout << "a==b" << endl;
    }
    else
    {
        cout << "a!=b" << endl;
    }
}

void test02()
{
    Person p1("Tom", 10);
    Person p2("Tom", 10);

    bool ret = myCompare(p1, p2);
    if (ret)
    {
        cout << "p1==p2" << endl;
    }
    else
    {
        cout << "p1!=p2" << endl;
    }
}

int main06()
{
    test01();
    test02();

    system("pause");
    return 0;
}