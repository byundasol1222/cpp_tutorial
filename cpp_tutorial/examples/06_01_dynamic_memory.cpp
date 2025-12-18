/* 
	동적 메모리 할당 및 해제 
*/

#include <iostream>
#include <time.h>
using namespace std;

void RunDynamicMemoryExample()
{
	int* p;
	srand(time(NULL)); // 난수 발생기 시드 설정
	p = new int[10];

	for (int i = 0; i < 10; i++)
		p[i] = rand();

	for (int i = 0; i < 10; i++)
		cout << p[i] << " ";

	delete[] p;
	cout << endl;
}
