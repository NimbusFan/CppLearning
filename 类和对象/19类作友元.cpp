#include <iostream>
using namespace std;

class Building {
	friend class GoodGay;
public:
	Building();
	string SittingRoom;
private:
	string BedRoom;
};

class GoodGay {
public:
	GoodGay();
	void Visit();
	Building* building;
};

Building::Building(){
	SittingRoom = "客厅";
	BedRoom = "卧室";
}

GoodGay::GoodGay() {
	building = new Building;
}

void GoodGay::Visit() {
	cout << "好基友正在访问:" << building->SittingRoom << endl;
	cout << "好基友正在访问:" << building->BedRoom << endl;
}

void test() {
	GoodGay gg;
	gg.Visit();
}

int main19() {
	test();
	system("pause");
	return 0;
}