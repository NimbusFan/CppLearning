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

    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);

    printDeuque(d1);

    d1.pop_back();
    printDeuque(d1);

    d1.pop_front();
    printDeuque(d1);
}

void test02()
{
    deque<int>d2;
    d2.push_back(10);
    d2.push_back(20);
    d2.push_front(100);
    d2.push_front(200);

    printDeuque(d2);

    d2.insert(d2.begin(), 1000);
    printDeuque(d2);

    d2.insert(d2.begin(), 2, 9999);
    printDeuque(d2);

    deque<int>d3;
    d3.push_back(1);
    d3.push_back(2);
    d3.push_front(3);

    d3.insert(d3.begin(), d2.begin(), d2.end());
    printDeuque(d3);
}

void test03()
{
    deque<int>d1;
    d1.push_back(10);
    d1.push_back(20);
    d1.push_front(100);
    d1.push_front(200);

    deque<int>::iterator it = d1.begin();
    it++;
    d1.erase(it); 
    printDeuque(d1);

    d1.erase(d1.begin(), d1.end());
    printDeuque(d1);
}

int main22()
{
    test01();
    test02();
    test03();

    system("pause");
    return 0;
}