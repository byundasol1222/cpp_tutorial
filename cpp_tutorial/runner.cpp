#include <iostream>
#include "runner.h"
using namespace std;

void RunExample(int which) {
	switch (which) {
	// You can add more cases here for other examples
	case RUN_REFERENCE:
		RunReferenceExample();
		break;
	case RUN_RETURN:
		RunReturnExample();
		break;
	default:
		cout << "No example selected." << endl;
		break;
	}
}