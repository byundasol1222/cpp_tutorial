#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Circle {
private:
	int radius;
	//int* pRadius; // 멤버 동적 생성
	char* name;
	static int count;
	//inline static int count = 0; // 정적 변수 초기화 (C++17부터 가능)
public:
	Circle();
	Circle(int radius);
	Circle(int radius, const char* name);
	Circle(const Circle& circle); // 복사 생성자 (자동 생성, 포인터 변수가 있을때만 직접 생성)
	~Circle();
	int getRadius() const;
	double getArea();
	static int getCount();
	void setRadius(int radius);
	void changeName(const char* name);
	void print();
};