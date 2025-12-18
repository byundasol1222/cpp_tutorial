#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
//#include <string> // Check required
#include <cstring>
using namespace std;

class Circle {
private:
	int radius;
	//int* pRadius; // 멤버 동적 생성
	//string name; // Check required
	char* name;
public:
	Circle();
	Circle(int radius);
	Circle(int radius, const char* name);
	Circle(const Circle& circle); // 복사 생성자 (자동 생성, 포인터 변수가 있을때만 직접 생성)
	~Circle();
	int getRadius() const;
	void setRadius(int radius);
	double getArea();
	void changeName(const char* name);
	void print();
};