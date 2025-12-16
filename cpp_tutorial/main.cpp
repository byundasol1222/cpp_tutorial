#include "runner.h"

// choose which example to run
#define RUN_EXAMPLE RUN_REFERENCE
//#define RUN_EXAMPLE RUN_RETURN

int main() {
	RunExample(RUN_EXAMPLE);
	return 0;
}