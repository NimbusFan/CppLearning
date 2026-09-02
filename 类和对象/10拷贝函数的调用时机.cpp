#include <iostream>
using namespace std;

//拷贝构造函数调用时机

//1、使用一个已经创建完毕的对象来初始化一个新对象
//2、值传递的方式给函数参数传值
//3、值传递方式返回局部对象

class Person
{
public:
    Person()
    {
        cout << "Person 默认构造函数调用" << endl;
    }

    Person(int age)
    {
        m_Age = age;
        cout << "Person 有参构造函数调用" << endl;
    }

    Person(const Person& p)
    {
        m_Age = p.m_Age;
        cout << "Person 拷贝构造函数调用" << endl;
    }

    ~Person()
    {
        cout << "Person 析构函数调用" << endl;
    }

    int m_Age;
};

void test01()
{
    Person p1(20);
    Person p2(p1);
    cout << "p2的年龄为：" << p2.m_Age << endl;
}

void doWork(Person p)
{
}

void test02()
{
    Person p;
    doWork(p);   
}


Person doWork2() 
{
    Person p1;   
    return p1;  
}

void test03()
{
    Person p = doWork2(); //这里没有调用拷贝构造函数，直接用p接收拷贝对象p1
}

int main()
{
    //test01();	
    //test02();
    test03();

    system("pause");
    return 0;

}