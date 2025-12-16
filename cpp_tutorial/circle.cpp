#include "circle.h"


Circle::Circle() {
	radius = 1; 
	cout << "contructor executed radius = " << radius << endl;
}

Circle::Circle(int radius) { 
	this->radius = radius;
	cout << "contructor executed radius = " << radius << endl;
}

Circle::~Circle() {
	cout << "destructor executed radius = " << radius << endl;
}

int Circle::getRadius() { 
	return radius; 
}

//int Circle::getRadius() const {
//	return radius;
//}

void Circle::setRadius(int radius) { 
	this->radius = radius; 
}

double Circle::getArea() { 
	return 3.14159 * radius * radius; 
}

void Circle::print() {
	cout << "Circle(" << radius << ")" << endl;
}