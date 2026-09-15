#include <iostream>
using namespace std;
#include <map>

void printMap(map<int, int>&m)
{
	for (map<int, int>::const_iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << (*it).first << "  value = " << it->second << "      ";
	}
	cout << endl;
}
 
void test()
{
	map<int, int>m1;
	m1.insert(pair<int, int>(1, 10));
	m1.insert(pair<int, int>(2, 20));
	m1.insert(pair<int, int>(3, 30));
	m1.insert(pair<int, int>(4, 40));

	printMap(m1);

	map<int, int>m2(m1);
	printMap(m2);

	map<int, int>m3;
	m3 = m1;
	printMap(m3);
}

int main43()
{
	test();

	system("pause");
	return 0;
}