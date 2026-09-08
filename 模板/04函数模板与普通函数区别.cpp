#include <iostream>
using namespace std;

int myAdd01(int a, int b)
{
    return a + b;
}

template<class T>
T myAdd02(T a, T b)
{
    return a + b;
}

void test01()
{
    int a = 10;
    int b = 20;
    char c = 'c'; // ASCII码，a - 97，c - 99
    cout << myAdd01(a, b) << endl;
    cout << myAdd01(a, c) << endl;


    //cout << myAdd02(a, c) << endl;

    cout << myAdd02<int>(a, c) << endl;
}

int main04()
{
    test01();

    system("pause");
    return 0;
}