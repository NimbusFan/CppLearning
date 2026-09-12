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
    s1.insert(20);
    s1.insert(40);
    s1.insert(30);
    s1.insert(10);
    s1.insert(30);

    printset(s1);

    set<int>::iterator pos = s1.find(30);
    if (pos != s1.end())
    {
        cout << "找到元素：" << *pos << endl;
    }
    else
    {
        cout << "未找到元素" << endl;
    }
}

void test02()
{
    set<int>s1;
    s1.insert(20);
    s1.insert(40);
    s1.insert(30);
    s1.insert(10);
    s1.insert(30);

    int num = s1.count(30);
    cout << "num = " << num << endl;
}

int main38() {

    test01();
    test02();

    system("pause");
    return 0;
}