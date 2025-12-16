#include "circle.h"

void Circle::setRadius(int radius) { 
	this->radius = radius; 
}

double Circle::getArea() { 
	return 3.14159 * radius * radius; 
}