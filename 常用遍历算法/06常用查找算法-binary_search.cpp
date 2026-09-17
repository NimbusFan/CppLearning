#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

void test01()
{
    vector<int>v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    bool ret = binary_search(v.begin(), v.end(), 9);

    if (ret)
    {
        cout << "找到元素" << endl;
    }
    else
    {
        cout << "没有找到元素：" << endl;
    }

    vector<int>v2;
    for (int i = 0; i < 10; i++)
    {
        v2.push_back(i);
    }

    v2.push_back(2);
    bool ret2 = binary_search(v2.begin(), v2.end(), 9);

    if (ret2)
    {
        cout << "找到元素";
    }
    else
    {
        cout << "没有找到元素" << endl;
    }
}


int main06() {

    test01();

    system("pause");
    return 0;
}