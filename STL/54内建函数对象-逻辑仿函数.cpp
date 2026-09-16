#include<iostream>
using namespace std;
#include<functional>  //内建函数对象头文件
#include<vector>
#include<algorithm>

void test01()
{
    vector<bool>v1;
    v1.push_back(true);
    v1.push_back(false);
    v1.push_back(true);
    v1.push_back(true);
    v1.push_back(false);

    for (vector<bool>::iterator it = v1.begin();it != v1.end();it++)
    {
        cout << *it << " ";
    }
    cout << endl;

    vector<bool>v2;
    v2.resize(v1.size()); 

    //第一个参数：原容器起始迭代器，第二个参数：原容器终止迭代器，第三个参数：目标容器起始迭代器
    transform(v1.begin(), v1.end(), v2.begin(), logical_not<bool>()); 

    for (vector<bool>::iterator it = v2.begin(); it != v2.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

int main() {

    test01();

    system("pause");
    return 0;
}