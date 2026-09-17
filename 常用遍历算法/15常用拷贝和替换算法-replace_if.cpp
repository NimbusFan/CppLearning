#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

class MyPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

class Greater30
{
public:
    bool operator()(int val)
    {
        return val >= 30;
    }
};

void test01()
{
    vector<int>v1;
    v1.push_back(20);
    v1.push_back(30);
    v1.push_back(50);
    v1.push_back(30);
    v1.push_back(40);
    v1.push_back(20);
    v1.push_back(10);
    v1.push_back(20);

    cout << "替换前：" << endl;
    for_each(v1.begin(), v1.end(), MyPrint());
    cout << endl;

    replace_if(v1.begin(), v1.end(), Greater30(), 30000);

    cout << "替换后：" << endl;
    for_each(v1.begin(), v1.end(), MyPrint());
    cout << endl;
}

int main15()
{
    test01();

    system("pause");
    return 0;
}