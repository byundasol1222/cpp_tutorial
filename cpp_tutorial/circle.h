#pragma once
#include <iostream>
using namespace std;

class Circle {
private:
	int radius;
public:
	Circle();
	Circle(int radius);
	~Circle();
	int getRadius();
	//int getRadius() const;
	void setRadius(int radius);
	double getArea();
	void print();
};