#include <iostream>
#include "../circle.h"
using namespace std;

void RunCopyExample()
{
	Circle src(1, "donut");
	Circle dest(src);
	src.print();
	dest.print();
	dest.changeName("sticker"); // 메모리 공간 부족하여 이름 변경 X
	dest.changeName("plate");
	src.print();
	dest.print();
}
