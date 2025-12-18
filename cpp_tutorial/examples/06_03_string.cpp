/*
	문자열 생성 및 출력
	문자열 숫자 변환
	문자열 동적 생성
*/

#include <iostream>
#include <string>
using namespace std;

void RunStringExample()
{
	string str;
	string address("서울시 성북구 삼선동 389");
	string copyAddress(address);
	char text[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
	string title(text);
	cout << str << endl;
	cout << address << endl;
	cout << copyAddress << endl;
	cout << title << endl;

	string s = "123";
	int n = stoi(s);
	cout << s << endl;
	cout << n << endl;

	string* p = new string("C++");
	cout << *p << endl;
	p->append(" Great!!");
	cout << *p << endl;
	delete p;
}
