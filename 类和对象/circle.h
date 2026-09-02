#pragma once
#include "Point.h"
class Circle {
private:
	double m_radius;
	Point m_center;

public:
	void setRadius(double r);
	int getRedius();
	void setCenter(Point p);
	Point getCenter();
};