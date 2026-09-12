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

    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);

    printset(s1);

    set<int>s2(s1);
    printset(s2);

    set<int>s3;
    s3 = s2;
    printset(s3);
}


int main35() {

    test01();

    system("pause");
    return 0;
}