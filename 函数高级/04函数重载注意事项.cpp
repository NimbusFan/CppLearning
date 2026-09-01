#include <iostream>
using namespace std;

void func(int& a)   
{
    cout << "func(int &a)调用" << endl;
}

void func(const int& a)                                             
{
    cout << "func(const int &a)调用" << endl;
}


void func2(int a, int b = 20)
{
    cout << "func2(int a,int b = 20) 的调用" << endl;
}

void func2(int a)
{
    cout << "func2(int a) 的调用" << endl;
}

int main()
{
    int a = 10;
                              
    func(a);
    func(10);

    func2(10, 20); 

    system("pause");

    return 0;

}