#include <iostream>
using namespace std;
#include<deque> 

void printDeuque(const deque<int>& d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    deque<int>d1;

    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeuque(d1);

    if (d1.empty())
    {
        cout << "d1为空" << endl;
    }
    else
    {
        cout << "d1不为空" << endl;
        cout << "d1的大小为：" << d1.size() << endl;
        //deque容器没有容量概念
    }
    //重新指定大小
    d1.resize(15, 1); //这里指定填充值为1，如果没有第二个参数，默认的填充值为0
    printDeuque(d1);

    d1.resize(5);
    printDeuque(d1);
}

int main21()
{
    test01();

    system("pause");
    return 0;
}