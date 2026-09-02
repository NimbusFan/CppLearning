#include <iostream>
using namespace std;

class Cube {
private:
	int m_L;
	int m_W;
	int m_H;
public:
	void setL(int l) {
		m_L = l;
	}

	int getL() {
		return m_L;
	}

	void setW(int w) {
		m_W = w;
	}

	int getW() {
		return m_W;
	}

	void setH(int h) {
		m_H = h;
	}

	int getH() {
		return m_H;
	}

	bool isSame(Cube c) {
		return m_L == c.getL() && m_W == c.getW() && m_H == c.getH() ? true : false;
	}

};

bool isSame(Cube c1, Cube c2) {
	return c1.getL() == c2.getL() && c1.getW() == c2.getW() && c1.getH() == c2.getH() ? true : false;
}

int main06() {
	Cube c1;
	c1.setL(10);
	c1.setW(10);
	c1.setH(10);

	Cube c2;
	c2.setL(10);
	c2.setW(10);
	c2.setH(10);

	cout << (isSame(c1, c2) ? "两个立方体相同" : "两个立方体不同") << endl;
	cout << (c1.isSame(c2) ? "两个立方体相同" : "两个立方体不同") << endl;

	system("pause");
	return 0;
}