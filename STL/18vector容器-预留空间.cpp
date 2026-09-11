#include <iostream>
using namespace std;
#include<vector> 

void test01()
{
    vector<int>v;
    int num = 0;  //统计开辟次数
    int* p = nullptr;

    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);

        if (p != &v[0])  
        {
            p = &v[0];
            num++;  
        }
    }

    cout << "num：" << num << endl;
}

void test02()
{
    vector<int>v;
    v.reserve(100000);

    int num = 0; 

    int* p = NULL;

    for (int i = 0; i < 100000; i++)
    {
        v.push_back(i);
        if (p != &v[0])
        {
            p = &v[0];
            num++;
        }
    }

    cout << "num：" << num << endl;
}

int main18()
{
    test01();
    test02();

    system("pause");
    return 0;
}