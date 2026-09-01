#include <iostream>
using namespace std;

//函数声明和函数实现只有有一处有默认参数
//某个位置有了默认参数后，从该位置往后必须都有默认参数
int func(int a,  int b,  int c);

int main01()
{
    cout << func(10, 20, 30) << endl;

    system("pause");
    return 0;

}

int func(int a, int b = 40, int c = 50)
{
    return a + b + c;
}