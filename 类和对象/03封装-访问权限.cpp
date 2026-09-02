#include <iostream>
using namespace std;

class Person
{
public:
    string m_Name;  

protected:
    string m_Car;

private:
    int m_Password;

public:
    void func()
    {
        m_Name = "李四";
        m_Car = "奔驰"; 
        m_Password = 123;
    }
};

int main03()
{
    //实例化具体对象
    Person p1;
    p1.m_Name = "李四";
    //p1.m_Car = "奔驰"; 
    //p1.m_Password = 123;

    p1.func();

    system("pause");
    return 0;

}