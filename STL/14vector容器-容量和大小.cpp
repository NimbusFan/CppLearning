#include <iostream>
using namespace std;
#include<vector> 

void printVector(vector<int>& v)
{
    for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}

void test01()
{
    vector<int>v1;
    for (int i = 0; i < 10; i++)
    {
        v1.push_back(i);
    }
    printVector(v1);

    if (v1.empty())
    {
        cout << "v1为空" << endl;
    }
    else
    {
        cout << "v1不为空：" << endl;
        cout << "capacity容量：" << v1.capacity() << endl;
        cout << "v1的大小为：" << v1.size() << endl;

        //重新指定大小
        v1.resize(15); 
        printVector(v1);

        v1.resize(20, 100); 
        printVector(v1);

        v1.resize(5); 
        printVector(v1);
    }
}


int main14()
{
    test01();

    system("pause");
    return 0;
}