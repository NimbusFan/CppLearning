#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void MyPrint(int val)
{
	cout << val << " ";
}

int main09()
{
	vector<int> v;
	v.push_back(20);
	v.push_back(50);
	v.push_back(30);
	v.push_back(10);
	v.push_back(40);

	sort(v.begin(), v.end());
	for_each(v.begin(), v.end(), MyPrint);

	sort(v.begin(), v.end(), greater<int>());
	for_each(v.begin(), v.end(), MyPrint);

	system("pause");
	return 0;
}