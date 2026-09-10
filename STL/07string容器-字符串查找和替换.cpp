#include <iostream>
using namespace std;

//1、查找
void test01()
{
    string str1 = "abcdefgde";
    int pos = str1.find("de");  //从零开始索引，返回值为d出现的位置"3"，若找不到子字符串，就返回-1
    if (pos == -1)
    {
        cout << "未找到字符串 pos = " << pos << endl;
    }
    else
    {
        cout << "找到字符串 pos = " << pos << endl;
    }

    //rfind
    pos = str1.rfind("de");  //rfind是从右往左查找，find是从左往右查找
    cout << "pos=" << pos << endl;
}

void test02()
{
    string str1 = "abcdefg";
    str1.replace(1, 3, "1111");  // 从 "1" 号位置起，将bcd替换成 "1111"
    cout << "str1= " << str1 << endl;
}

int main07()
{
    test01();
    test02();

    system("pause");
    return 0;
}