#include <iostream>
#include "../circle.h"

void RunReferenceExample() {
	Circle circle;
	Circle& refc = circle; // 참조 변수

	refc.setRadius(10);
	cout << refc.getArea() << " " << circle.getArea() << endl;
}