#include <iostream>
using namespace std;

class Building {
	friend void GoodGay(Building& building);
public:

	Building() {
		m_SittingRoom = "客厅";
		m_BedRoom = "卧室";
	}

	string m_SittingRoom;

private:
	string m_BedRoom;
};

void GoodGay(Building& building) {
	cout << "好基友正在访问：" << building.m_SittingRoom << endl;
	cout << "好基友正在访问：" << building.m_BedRoom << endl;
}

int main18() {
	Building building;
	GoodGay(building);

	system("pause");
	return 0;
}