#include <iostream>
using namespace std;
#include <string>
#include <cstdlib>
#include <ctime>


struct student
{
    string name;
    int age;
    int score = 0;
};

void printStudents(const student* s)
{
    //s->age = 150;  
    cout << "姓名：" << s->name << "年龄：" << s->age << "分数：" << s->score << endl;
}


int main06()
{
    struct student s = { "张三",15,70 };

    printStudents(&s);
    cout << "main中张三年龄为：" << s.age << endl;

    system("pause");
    return 0;

}