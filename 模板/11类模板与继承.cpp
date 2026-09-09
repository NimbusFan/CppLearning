#include <iostream>
using namespace std;

//类模板与继承
template<class T>
class Base
{
    T m;
};

//class Son1 :public Base 
class Son1 :public Base<int>
{

};

//如果想灵活指定父类中T类型，子类也需要变类模板
template<class T1, class T2>
class Son2 :public Base<T2>  //T2给了父类
{
public:
    Son2()
    {
        cout << "T1的类型为：" << typeid(T1).name() << endl;
        cout << "T2的类型为：" << typeid(T2).name() << endl;
    }
    T1 obj; 
};


void test01()
{
    Son1 s1;
}

void test02()
{
    Son2 <int, char>s2;//T1为int，即obj为int型，T2为char型，即m为char型
}
int main11()
{
    test01();
    test02();

    system("pause");
    return 0;
}