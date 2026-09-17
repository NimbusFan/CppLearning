#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
#include <string>
#include <functional>
#include <random>


class myPrint
{
public:
    void operator()(int val)
    {
        cout << val << " ";
    }
};

void test01()
{
    vector<int>v;
    for (int i = 0; i < 10; i++)
    {
        v.push_back(i);
    }

    shuffle(v.begin(), v.end(), default_random_engine(time(NULL)));
    for_each(v.begin(), v.end(), myPrint());
    cout << endl;
}

int main10()
{
    test01();

    system("pause");
    return 0;
}