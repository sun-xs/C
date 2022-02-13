#define _CRT_SECURE_NO_WARNINGS 1


#include <stdio.h>

//位段	-二进制位
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
//
//int main()
//{
//	struct S s;
//	printf("%zd\n", sizeof(s)); //8个字节
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };
	s.a = 10;
	s.b = 20;
	s.c = 3;
	s.d = 4;

	return 0;
}

//位段对比结构体而言，可以达到同样的效果,但更节省内存空间，却不支持跨平台。
//注重可移植性的代码应该避免使用位段。