#pragma once
#include <iostream>
//#include <string> // Check required
using namespace std;

class Circle {
private:
	int radius;
	//int* pRadius; // 멤버 동적 생성
	//string name; // Check required
public:
	Circle(const Circle& circle); // 복사 생성자
	Circle();
	Circle(int radius); 
	~Circle();
	int getRadius() const;
	void setRadius(int radius);
	double getArea();
	void print();
};