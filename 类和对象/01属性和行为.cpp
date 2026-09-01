#include <iostream>
using namespace std;

const double PI = 3.14;

class Circle
{
    //访问权限
    //公共权限
public:

    int m_r;
    double calculateZC()
    {
        return 2 * PI * m_r;
    }
};

int main01()
{
    Circle c1;
    c1.m_r = 10;
    cout << "圆的周长为：" << c1.calculateZC() << endl;

    system("pause");
    return 0;

}