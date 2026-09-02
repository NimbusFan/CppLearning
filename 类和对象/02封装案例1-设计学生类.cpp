#include <iostream>
using namespace std;

class Student {
public:
	string s_name;
	int s_id;

public:
	void setName(string name) {
		s_name = name;
	}

	void setId(int id) {
		s_id = id;
	}

	void showStudent() {
		cout << "学生姓名：" << s_name << " " << "学生ID：" << s_id << endl;
	}
};

int main02()
{
	Student s1;
	s1.setName("周杰伦");
	s1.setId(110);
	s1.showStudent();

	system("pause");
	return 0;
}