#include<iostream>
using namespace std;
#include<functional> 

void test01()
{
    negate<int> n;
    cout << n(50) << endl;
}

void test02()
{
    plus<int> p;
    cout << p(50, 60) << endl;
}

int main52() {

    test01();
    test02();

    system("pause");
    return 0;
}