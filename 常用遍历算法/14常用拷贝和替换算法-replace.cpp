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

void test01()
{
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
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

    //将容器里面所有的20替换成2000
    replace(v1.begin(), v1.end(), 20, 20000);
    cout << "替换后：" << endl;
    for_each(v1.begin(), v1.end(), MyPrint());
    cout << endl;
}

int main14()
{
    test01();

    system("pause");
    return 0;
}