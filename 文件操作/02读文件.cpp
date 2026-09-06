#include <iostream>
using namespace std;
#include <fstream>
#include <string>

void test() {
	ifstream ifs;
	ifs.open("test.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "文件打开失败" << endl;
	}
	//方法1
	//char buf[1024] = { 0 };
	//while (ifs >> buf) {
	//	cout << buf << endl;
	//}

	//方法2
	//char buf[1024] = { 0 };
	//while (ifs.getline(buf, sizeof(buf))) {
	//	cout << buf << endl;
	//}

	//方法3
	//string buf;
	//while (getline(ifs, buf)) {
	//	cout << buf << endl;
	//}

	//方法4
	char c;
	while ((c = ifs.get()) != EOF) {
		cout << c;
	}

	ifs.close();

}

int main02() {
	test();
	system("pause");
	return 0;
}