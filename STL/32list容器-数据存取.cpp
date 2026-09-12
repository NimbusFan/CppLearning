#include<iostream>
using namespace std;
#include <list>

void printList(const list<int>& L)
{
    for (list<int>::const_iterator it = L.begin(); it != L.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    list<int>L1;

    L1.push_back(10);
    L1.push_back(20);
    L1.push_back(30);
    L1.push_back(40);

    cout << "第一个元素为：" << L1.front() << endl;

    cout << "最后一个元素为：" << L1.back() << endl;

    list<int>::iterator it = L1.begin();

    //因为list是双向的，所以支持递增、递减++、--的操作，但是不支持it = it+1;it = it+2;....，即不支持这样的随机访问      
    it++;  
}

int main32() {

    test01();

    system("pause");
    return 0;
}