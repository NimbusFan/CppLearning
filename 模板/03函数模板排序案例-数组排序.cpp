#include <iostream>
using namespace std;

template<class T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = temp;
}

template<class T>
void printArray(T arr[], int num)
{
	for (int i = 0; i < num; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

template<class T>
void mySort(T arr[], int num) 
{
	for (int i = 0; i < num - 1; i++)
	{
		int min = i;
		for (int j = i + 1; j < num; j++)
		{
			if (arr[j] < arr[min])
			{
				min = j;
			}
		}
		if (min != i)
		{
			mySwap(arr[i], arr[min]);
		}
	}
}

void test01()
{
	int intArr[] = { 2, 1, 6, 3, 9, 4, 5, 8, 7, 0 };
	int num = sizeof(intArr) / sizeof(int);
	mySort(intArr, num);
	printArray(intArr, num);
}

void test02()
{
	char charArr[] = "dbafegc";
	int num = sizeof(charArr) / sizeof(char);
	mySort(charArr, num);
	printArray(charArr, num);
}

int main03()
{
	test01();
	test02();
	system("pause");
	return 0;
}