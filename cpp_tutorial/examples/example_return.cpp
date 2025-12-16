#include <iostream>
#include "../circle.h"
#include "../circle_utils.h"
using namespace std;

void RunReturnExample()
{
	Circle circle;
	circle.print();

	circle = getCircle(30); // 객체 리턴
	circle.print();

	upgradeCircle(circle); // 객체 함수로 전달
	circle.print();

	upgradeCircle(&circle); // 객체의 주소를 함수로 전달
	circle.print();
}


