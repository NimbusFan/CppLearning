#include "Circle.h"
#include <iostream>

void Circle::setRadius(double r) {
	m_radius = r;
};

int Circle::getRedius() {
	return m_radius;
};

void Circle::setCenter(Point p) {
	m_center = p;
};

Point Circle::getCenter() {
	return m_center;
};