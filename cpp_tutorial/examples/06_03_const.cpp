/*
	const 포인터와 const 멤버 함수
*/

#include <iostream>
#include "../circle.h"
using namespace std;

void RunConstExample()
{
	Circle* p = new Circle();
	const Circle* pConstObj = new Circle();
	Circle* const pConstPtr = new Circle();

	cout << "p->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl << endl;

	p->setRadius(30);
	//pConstObj->setRadius(30); // 오류: const 객체이므로 멤버 변수 변경 불가
	pConstPtr->setRadius(30);

	cout << "p->radius: " << p->getRadius() << endl;
	cout << "pConstObj->radius: " << pConstObj->getRadius() << endl;
	cout << "pConstPtr->radius: " << pConstPtr->getRadius() << endl;
}