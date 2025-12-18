#include <iostream>
#include "../circle.h"
#include "../circle_utils.h"
using namespace std;

char& find(char s[], int index) {
	return s[index]; // 참조 리턴
}

void RunReferenceExample()
{
	Circle circle;
	cout << circle.getArea() << endl;
	Circle& refc = circle; // 참조 변수
	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea() << endl << endl;

	Circle waffle(30);
	increaseCircle(waffle);
	cout << waffle.getRadius() << endl << endl;

	Circle donut;
	readRadius(donut);
	cout << donut.getRadius() << endl << endl;

	char name[] = "Mike";
	cout << name << endl;
	find(name, 0) = 'S';
	cout << name << endl;
	char& ref = find(name, 2);
	ref = 't';
	cout << name << endl;
}