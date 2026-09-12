#include<iostream>
using namespace std;
#include <set>

void printset(const set<int>& L)
{
    for (set<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    set<int>s1;

    pair<set<int>::iterator, bool> ret = s1.insert(10);  
    if (ret.second)
    {
        cout << "第一次插入成功" << endl;
    }
    else
    {
        cout << "第一次插入失败" << endl;
    }

    ret = s1.insert(10);  

    if (ret.second)
    {
        cout << "第二次插入成功" << endl;
    }
    else
    {
        cout << "第二次插入失败" << endl;
    }

    multiset<int>ms;
    ms.insert(10);
    ms.insert(10);
    ms.insert(10);

    for (multiset<int>::const_iterator it = ms.begin(); it != ms.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main39()
{
    test01();

    system("pause");
    return 0;
}