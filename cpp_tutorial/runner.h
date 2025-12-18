#pragma once

#define RUN_REFERENCE 1
#define RUN_RETURN 2
#define RUN_COPY 3
#define RUN_DYNAMIC_MEMORY 4
#define RUN_SMART_POINTER 5
#define RUN_DYNAMIC_OBJECT 6
#define RUN_OBJECT_POINTER 7

void RunExample(int which);
void RunReferenceExample();
void RunReturnExample();
void RunCopyExample();
void RunDynamicMemoryExample();
void RunSmartPointerExample();
void RunDynamicObjectExample();
void RunObjectPointerExample();