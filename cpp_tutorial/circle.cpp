#include "circle.h"

int Circle::count = 0; // 정적 변수 초기화

Circle::Circle() {
	radius = 1;
	//pRadius = new int(1);
	name = nullptr;
	count++;
	cout << "contructor executed radius = " << radius << endl;
}

Circle::Circle(int radius) { 
	this->radius = radius;
	//pRadius = new int(radius);
	name = nullptr;
	count++;
	cout << "contructor executed radius = " << radius << endl;
}

Circle::Circle(int radius, const char* name) {
	this->radius = radius;
	//pRadius = new int(radius);
	this->name = new char[strlen(name) + 1];
	strcpy(this->name, name);
	count++;
	cout << "contructor executed radius = " << radius << ", name = " << this->name << endl;
}	

Circle::Circle(const Circle& circle) {
	this->radius = circle.radius;
	//pRadius = new int(*(circle.pRadius)); // Check required
	
	//this->name = circle.name; // shallow copy
	this->name = new char[strlen(circle.name) + 1]; // deep copy
	strcpy(this->name, circle.name);
	cout << "copy contructor executed radius = " << radius << endl;
}

Circle::~Circle() {
	//delete pRadius;
	if (name != nullptr) {
		delete[] name;
	}
	count--;
	cout << "destructor executed radius = " << radius << endl;
}

int Circle::getRadius() const { 
	return radius;
	//return *pRadius; // Check required
}

double Circle::getArea() { 
	return 3.14159 * radius * radius; 
}

int Circle::getCount() {
	return count;
}

void Circle::setRadius(int radius) {
	this->radius = radius;
	//*pRadius = radius;
}

void Circle::changeName(const char* name) {
	if(strlen(name) > strlen(this->name)) {
		cout << "Not enough space to change name." << endl;
		return;
	}
	strcpy(this->name, name);
}

void Circle::print() {
	cout << "Circle(" << radius << "), ";
	if (name != nullptr) {
		cout << name;
	}
	cout << endl;
}