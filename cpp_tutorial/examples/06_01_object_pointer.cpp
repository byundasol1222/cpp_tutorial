/*
	객체 포인터 선언 및 활용
*/

#include <iostream>
#include "../circle.h"
using namespace std;

void RunObjectPointerExample()
{
	Circle donut;
	Circle* pCircle = &donut;

	cout << donut.getArea() << endl;
	cout << pCircle->getArea() << endl;
	cout << (*pCircle).getArea() << endl;
}
