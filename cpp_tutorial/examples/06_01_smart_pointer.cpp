/* 
	스마트 포인터

	실제 Test 객체는 heap에 있고, 관리하는 unique_ptr (스마트포인터 객체)는 stack에 있음.
	즉, stack 객체가 스코프 끝날때 사라지는 것을 활용하여 동적 메모리 자동 해제
*/

#include <iostream>
#include <memory>
using namespace std;

struct Test {
	Test() { cout << "Test 생성\n"; }
	~Test() { cout << "Test 소멸\n"; }
};

void RunSmartPointerExample()
{
	{
		//unique_ptr<Test> p(new Test); // not exception-safe
		//unique_ptr<Test> p = make_unique<Test>(); // exception-safe
		auto p = make_unique<Test>(); // exception-safe (modern C++)

		//unique_ptr<int[]> buf(new int[10]);
		auto buf = make_unique<int[]>(10);

		for (int i = 0; i < 10; i++)
		{
			buf[i] = i;
			cout << buf[i] << " ";
		}
		cout << endl;
		cout << "스코프 안\n";
	}
	cout << "스코프 밖\n";
}
