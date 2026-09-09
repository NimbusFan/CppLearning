#include <iostream>
using namespace std;
#include "person.hpp"                         

void test()
{
    Person<string, int>p("Jerry", 18);
    p.showPerson();
}

int main13()
{
    test();

    system("pause");
    return 0;
}