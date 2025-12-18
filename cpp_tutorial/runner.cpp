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
	case RUN_COPY:
		RunCopyExample();
		break;
	case RUN_DYNAMIC_MEMORY:
		RunDynamicMemoryExample();
		break;
	case RUN_SMART_POINTER:
		RunSmartPointerExample();
		break;
	case RUN_DYNAMIC_OBJECT:
		RunDynamicObjectExample();
		break;
	case RUN_OBJECT_POINTER:
		RunObjectPointerExample();
		break;
	case RUN_STRING:
		RunStringExample();
		break;
	case RUN_CONST:
		RunConstExample();
		break;
	default:
		cout << "No example selected." << endl;
		break;
	}
}