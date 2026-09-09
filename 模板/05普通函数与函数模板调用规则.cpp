#include <iostream>
using namespace std;

//普通函数
void myPrint(int a, int b)
{
    cout << "调用的普通函数" << endl;
}

//函数模板
template<class T>
void myPrint(T a, T b)
{
    cout << "调用的模板" << endl;
}

//函数模板重载
template<class T>
void myPrint(T a, T b, T c)
{
    cout << "调用重载的模板" << endl;
}

void test()
{
    int a = 10;
    int b = 20;

    myPrint(a, b);   

    myPrint<>(a, b); 

    myPrint(a, b, 100); 

    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1, c2); 
}

int main05()
{
    test();

    system("pause");
    return 0;
}