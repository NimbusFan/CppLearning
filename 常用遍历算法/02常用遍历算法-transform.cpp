#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

class Transform
{
public:
	int operator()(int val)
	{
		return val + 100;
	}
};

class MyPrint
{
public:
	void operator()(int val)
	{
		cout << val << " ";
	}
};

void test()
{
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int> vTarget;
	
	vTarget.resize(v.size());
	transform(v.begin(), v.end(), vTarget.begin(), Transform());

	for_each(vTarget.begin(), vTarget.end(), MyPrint());
	cout << endl;
}

int main02()
{
	test();

	system("pause");
	return 0;
}