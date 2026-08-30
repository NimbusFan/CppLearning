#include <iostream>
using namespace std;


int max(int a, int b);

int main()
{
    int a = 10;
    int b = 20;
    cout << max(a, b) << endl;

    system("pause");   

    return 0;

}

//函数定义在main函数之后，必须要在main函数之前写函数的声明
int max(int a, int b)
{
    return a > b ? a : b;
}