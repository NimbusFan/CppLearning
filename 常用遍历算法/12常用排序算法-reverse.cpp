#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>


void myPrint(int val)
{
    cout << val << " ";
}

void test01()
{
    vector<int>v1;
    v1.push_back(10);
    v1.push_back(30);
    v1.push_back(50);
    v1.push_back(20);
    v1.push_back(40);

    cout << "反转前：" << endl;
    for_each(v1.begin(), v1.end(), myPrint);
    cout << endl;

    cout << "反转后：" << endl;
    reverse(v1.begin(), v1.end());
    for_each(v1.begin(), v1.end(), myPrint);
    cout << endl;
}

int main12()
{
    test01();

    system("pause");
    return 0;
}