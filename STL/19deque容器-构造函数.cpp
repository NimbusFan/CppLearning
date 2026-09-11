#include <iostream>
using namespace std;
#include<deque> 

void printDeuque(const deque<int>& d)
{
    for (deque<int>::const_iterator it = d.begin(); it != d.end(); it++)  //只读迭代器
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    //无参构造函数
    deque<int>d1; 

    for (int i = 0; i < 10; i++)
    {
        d1.push_back(i);
    }
    printDeuque(d1);

    //区间的方式构造
    deque<int>d2(d1.begin(), d1.end());
    printDeuque(d2);

    //n个值的方式构造
    deque<int>d3(10, 100);
    printDeuque(d3);

    //拷贝构造
    deque<int>d4(d3);
    printDeuque(d4);
}

int main19()
{
    test01();

    system("pause");
    return 0;
}