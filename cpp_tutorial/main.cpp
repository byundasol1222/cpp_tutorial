#include "runner.h"

// choose which example to run
//#define RUN_EXAMPLE RUN_REFERENCE
//#define RUN_EXAMPLE RUN_RETURN
//#define RUN_EXAMPLE RUN_COPY
//#define RUN_EXAMPLE RUN_DYNAMIC_MEMORY
//#define RUN_EXAMPLE RUN_SMART_POINTER
//#define RUN_EXAMPLE RUN_DYNAMIC_OBJECT
//#define RUN_EXAMPLE RUN_OBJECT_POINTER
//#define RUN_EXAMPLE RUN_STRING
#define RUN_EXAMPLE RUN_CONST

int main() {
	RunExample(RUN_EXAMPLE);
	return 0;
}