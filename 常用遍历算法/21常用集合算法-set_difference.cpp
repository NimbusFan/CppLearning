#include<iostream>
using namespace std;
#include<vector>
#include<numeric>
#include<algorithm>

void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v1;
    vector<int>v2;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
        v2.push_back(i + 5);
    }
    vector<int>vTarget;
    vTarget.resize(max(v1.size(), v2.size()));

    cout << "v1和v2的差集为：" << endl;
    vector<int>::iterator itEnd = set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), vTarget.begin());
    for_each(vTarget.begin(), vTarget.end(), myPrint);
    cout << endl;
    for_each(vTarget.begin(), itEnd, myPrint);
    cout << endl;

    cout << "v2和v1的差集为：" << endl;
    itEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), vTarget.begin());
    for_each(vTarget.begin(), vTarget.end(), myPrint);
    cout << endl;
    for_each(vTarget.begin(), itEnd, myPrint);
    cout << endl;
}

int main21()
{
    test01();

    system("pause");

    return 0;
}