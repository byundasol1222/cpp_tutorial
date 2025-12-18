#include "circle.h"

Circle::Circle(const Circle& circle) {
	this->radius = circle.radius; 
	//pRadius = new int(*(circle.pRadius)); // Check required
	cout << "copy contructor executed radius = " << radius << endl;
}

Circle::Circle() {
	radius = 1;
	//pRadius = new int(1);
	cout << "contructor executed radius = " << radius << endl;
}

Circle::Circle(int radius) { 
	this->radius = radius;
	//pRadius = new int(radius);
	cout << "contructor executed radius = " << radius << endl;
}

Circle::~Circle() {
	//delete pRadius;
	cout << "destructor executed radius = " << radius << endl;
}

int Circle::getRadius() { 
	return radius; 
	//return *pRadius;
}

// Check required
//int Circle::getRadius() const { 
//	return radius;
//}

void Circle::setRadius(int radius) { 
	this->radius = radius;
	//*pRadius = radius;
}

double Circle::getArea() { 
	return 3.14159 * radius * radius; 
}

void Circle::print() {
	cout << "Circle(" << radius << ")" << endl;
}