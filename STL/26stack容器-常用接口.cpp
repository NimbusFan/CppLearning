#include<iostream>
using namespace std;
#include <stack>

void test01()
{
    stack<int>s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    while (!s.empty())
    {
        cout << "栈顶元素为：" << s.size() << endl;

        s.pop();
    }
    cout << "栈的大小：" << s.size() << endl;
}

int main26() {
    test01();

    system("pause");
    return 0;
}