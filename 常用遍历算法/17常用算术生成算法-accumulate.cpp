#include<iostream>
using namespace std;
#include<vector>
#include<numeric>

void test01()
{
    vector<int>v1;
    for (int i = 0; i <= 100; i++)
    {
        v1.push_back(i);
    }

    int total1 = accumulate(v1.begin(), v1.end(), 0);
    int total2 = accumulate(v1.begin(), v1.end(), 10000);
    cout << "total1 = " << total1 << endl;
    cout << "total2 = " << total2 << endl;
}

int main17()
{
    test01();

    system("pause");
    return 0;
}