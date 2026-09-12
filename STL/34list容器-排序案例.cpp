#include<iostream>
using namespace std;
#include <list>
#include<algorithm>

class Person
{
public:
    Person(string name, int age, int height)
    {
        this->m_Name = name;
        this->m_Age = age;
        this->m_Height = height;
    }
    string m_Name; 
    int m_Age;    
    int m_Height;  
};

//指定排序规则
bool comparePerson(Person& p1, Person& p2)
{
    if (p1.m_Age == p2.m_Age)
    {
        return p1.m_Height > p2.m_Height;
    }
    return p1.m_Age < p2.m_Age;
}

void test01()
{
    list<Person>L; 

    Person p1("刘备", 35, 175);
    Person p2("刘备", 45, 180);
    Person p3("刘备", 50, 170);
    Person p4("刘备", 25, 190);
    Person p5("刘备", 35, 160);
    Person p6("刘备", 35, 200);

    L.push_back(p1);
    L.push_back(p2);
    L.push_back(p3);
    L.push_back(p4);
    L.push_back(p5);
    L.push_back(p6);

    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
    }

    cout << "---------------" << endl;
    cout << "排序后：" << endl;

    L.sort(comparePerson);
    for (list<Person>::iterator it = L.begin(); it != L.end(); it++)
    {
        cout << "姓名：" << (*it).m_Name << " 年龄：" << it->m_Age << " 身高：" << it->m_Height << endl;
    }
}


int main34()
{
    test01();

    system("pause");
    return 0;
}