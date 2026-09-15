#include<iostream>
using namespace std;
#include <map>

void printMap(map<int, int>& m)
{
    for (map<int, int>::iterator it = m.begin();it != m.end();it++)
    {
        cout << "key = " << it->first << " value = " << it->second << endl;
    }
    cout << endl;
}

void test01()
{
    map<int, int>m;
    m.insert(pair<int, int>(1, 10)); 
    m.insert(pair<int, int>(3, 30));
    m.insert(pair<int, int>(2, 20));
    printMap(m);

    if (m.empty())
    {
        cout << "m为空" << endl;
    }
    else
    {
        cout << "m不为空" << endl;
        cout << "m的大小" << m.size() << endl;
    }
}

void test02()
{
    map<int, int>m1;
    m1.insert(pair<int, int>(1, 10)); 
    m1.insert(pair<int, int>(3, 30));
    m1.insert(pair<int, int>(2, 20));

    map<int, int>m2;
    m2.insert(pair<int, int>(4, 100));
    m2.insert(pair<int, int>(5, 300));
    m2.insert(pair<int, int>(6, 200));

    cout << "交换前：" << endl;
    printMap(m1);
    printMap(m2);

    m1.swap(m2);
    cout << "交换后：" << endl;
    printMap(m1);
    printMap(m2);
}

int main44()
{
    test01();
    test02();

    system("pause");
    return 0;
}