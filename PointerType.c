#include <stdio.h>

int main()
{
	int a = 0x12233445;
	//int* pa = &a;
	//*pa = 0;
	
	//char* pb = &a;
	//*pb = 0;
	
	double* pc = &a;
	*pc = 0;

	//printf("%p\n", pa);
	//printf("%p\n", pb);

	//指针类型决定了指针进行解引用操作的时候，能够访问空间的大小
	// 
	//int* p; *p能够访问4个字节
	//char* p; *p能够访问1个字节
	//double* p; *p能够访问8个字节
	//选择合适的类型去使用

	return 0;
}