#include <iostream>
using namespace std;
#include<vector> //STL中每个容器使用时都要包含对应的头文件
#include<algorithm> //这是标准算法的头文件


void myPrint(int val)
{
    cout << val << endl;
}

void test01()
{
    //创建一个vector容器数组，类型为int
    vector<int> v;  

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //通过迭代器访问容器中的数据
    vector<int>::iterator itBegin = v.begin();  //起始迭代器v.begin()指向容器中第一个元素的位置
    vector<int>::iterator itEnd = v.end();  // 结束迭代器v.end()指向容器中最后一个元素的下一个位置

    //第一种遍历方式
    while (itBegin != itEnd)
    {
        cout << *itBegin << endl;  //类似指针，解引用，取出值
        itBegin++; 
    }

    //第二种遍历方式
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << endl;
    }

    //第三种遍历方式，利用STL提供遍历算法
    for_each(v.begin(), v.end(), myPrint);

}

int main01()
{
    test01();

    system("pause");
    return 0;
}