/*
	동적 객체 (동적 멤버 테스트에서 pRadius 관련 주석 해제 필요)
*/

#include <iostream>
#include "../circle.h"
using namespace std;

void RunDynamicObjectExample()
{
	Circle* pCircle = new Circle(10);
	pCircle->print();

	pCircle->setRadius(20);
	pCircle->print();

	delete pCircle;
} 