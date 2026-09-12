#include<iostream>
using namespace std;
#include <list>
#include<algorithm>

void printList(const list<int>& L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

bool myCopare(int v1, int v2)
{
    //降序 就让第一个数 大于 第二个数为真
    return v1 > v2;
}

void test01()
{
    list<int>L1;
    L1.push_back(20);
    L1.push_back(10);
    L1.push_back(50);
    L1.push_back(40);
    L1.push_back(30);

    cout << "反转前：" << endl;
    printList(L1);
    L1.reverse();
    cout << "反转后：" << endl;
    printList(L1);

    cout << "排序前：" << endl;
    printList(L1);

    //所有不支持随机访问迭代器的容器，不可以用标准算法
    //不支持随机访问迭代器的容器，内部会单独提供对应的算法
    //sort(L1.begin(),L1.end());  //报错，这是标准算法，全局函数的sort()
    //默认排序规则 从小到大 升序
    L1.sort();  
    cout << "排序后：" << endl;
    printList(L1);

    //降序排列 这是成员函数的sort()
    L1.sort(myCopare);  
    cout << "重载排序算法，降序排序后：" << endl;
    printList(L1);
}


int main33()
{
    test01();

    system("pause");
    return 0;
}