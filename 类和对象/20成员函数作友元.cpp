#include <iostream>
using namespace std;

class Building;

class GoodGay {
public:
	GoodGay();
	void Visit1();
	void Visit2();

	Building* building;
};

class Building {
	friend void GoodGay::Visit1();
public:
	Building();
	string SittingRoom;
private:
	string BedRoom;
};

Building::Building() {
	SittingRoom = "客厅";
	BedRoom = "卧室";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::Visit1() {
	cout << "好基友正在访问:" << building->SittingRoom << endl;
	cout << "好基友正在访问:" << building->BedRoom << endl;
}

void GoodGay::Visit2() {
	cout << "好基友正在访问:" << building->SittingRoom << endl;
	//cout << "好基友正在访问:" << building->BedRoom << endl;
}

void test() {
	GoodGay gg;
	gg.Visit1();
	cout << "***************  分割线  ***************" << endl;
	gg.Visit2();
}

int main20() {
	test();
	system("pause");
	return 0;
}