#include <iostream>
using namespace std;
#include "circle.h"
#include "point.h"

void isInCircle(Circle c, Point p) {
	int distance = (c.getCenter().getX() - p.getX()) * (c.getCenter().getX() - p.getX()) 
		         + (c.getCenter().getY() - p.getY()) * (c.getCenter().getY() - p.getY());
	int rdistance = c.getRedius() * c.getRedius();

	if (distance == rdistance) {
		cout << "点在圆上" << endl;
	}
	else if (distance < rdistance) {
		cout << "点在圆内" << endl;
	}
	else {
		cout << "点在圆外" << endl;
	}
}

int main07() {
	Circle c;
	c.setRadius(10);
	Point center;
	center.setX(10);
	center.setY(0);
	c.setCenter(center);

	Point p;
	p.setX(10);
	p.setY(10);

	isInCircle(c, p);
	system("pause");
	return 0;
}