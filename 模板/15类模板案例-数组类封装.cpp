#include <iostream>
using namespace std;
#include "MyArray.hpp"

void printIntArray(MyArray<int>& arr) {
	for (int i = 0; i < arr.Get_Size();i++)
	{
		cout << arr[i] << endl;
	}
}

class Person
{
public:
	Person() {};
	Person(string name, int age)
	{
		this->m_Name = name;
		this->m_Age = age;
	}

	string m_Name;
	int m_Age = 0;
};

void printPersonArray(MyArray<Person>& arr) {
	for (int i = 0; i < arr.Get_Size(); i++)
	{
		cout << "姓名：" << arr[i].m_Name << "年龄：" << arr[i].m_Age << endl;
	}
}

void test01()
{
	MyArray<int> arr1(5);
	for (int i = 0; i < 5;i++)
	{
		arr1.Push_Back(i);
	}
	cout << "arr1的打印输出为：" << endl;
	printIntArray(arr1);

	cout << "arr1的容量为：" << arr1.Get_Capacity() << endl;
	cout << "arr1的大小为：" << arr1.Get_Size() << endl;

	MyArray <int> arr2(arr1);
	cout << "arr2的打印输出为：" << endl;
	printIntArray(arr2);

	arr2.Pop_Back();
	cout << "arr2尾删一次后：" << endl;
	cout << "arr2的容量为：" << arr2.Get_Capacity() << endl;
	cout << "arr2的大小为：" << arr2.Get_Size() << endl;

}

void test02() {
	MyArray<Person> arr(10);
	Person p1("孙悟空", 1000);
	Person p2("猪八戒", 800);
	Person p3("沙悟净", 500);
	Person p4("唐三藏", 100);

	arr.Push_Back(p1);
	arr.Push_Back(p2);
	arr.Push_Back(p3);
	arr.Push_Back(p4);

	printPersonArray(arr);
	cout << "arr的容量为：" << arr.Get_Capacity() << endl;
	cout << "arr的大小为：" << arr.Get_Size() << endl;
}

int main15()
{
	//test01();
	test02();

	system("pause");
	return 0;
}