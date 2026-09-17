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
    v1.resize(10);
    for_each(v1.begin(), v1.end(), myPrint);
    cout << endl;

    fill(v1.begin(), v1.end(), 100);
    for_each(v1.begin(), v1.end(), myPrint);
    cout << endl;
}

int main18()
{
    test01();

    system("pause");
    return 0;
}