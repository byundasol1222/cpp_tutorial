#include <iostream>
#include "../circle.h"
using namespace std;

void RunStaticExample()
{
	Circle c1;
	cout << Circle::getCount() << endl;
	Circle c2[5];
	cout << Circle::getCount() << endl;
}