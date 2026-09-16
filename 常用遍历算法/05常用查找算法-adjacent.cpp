#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<string>

void test()
{
    vector<int>v;
    v.push_back(0);
    v.push_back(2);
    v.push_back(0);
    v.push_back(3);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3); 
    v.push_back(3);

    vector<int>::iterator pos = adjacent_find(v.begin(), v.end());

    if (pos == v.end())
    {
        cout << "没有找到相邻重复元素";
    }
    else
    {
        cout << "找到相邻重复元素：" << *pos << endl;
    }
}

int main05()
{
    test();

    system("pause");
    return 0;
}