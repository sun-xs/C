#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//联合-联合体-共用体

//联合的特点
//联合的成员是共用同一块内存空间的，这样一个联合变量的大小，至少是最大成员的大小
//(因为联合至少的有能力保存最大的那个成员）
//联合体内成员不能同时使用
//union Un
//{
//	char c;//1
//	int i;//4
//};
////5个字节
//
//int main()
//{
//	union Un u;
//	printf("%zd\n", sizeof(u));
//
//	printf("%p\n", &u);
//	
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//面试题
//判断当前计算机的大小端存储

//int check_sys()
//{
//	int a = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return  *(char*)&a;
//}

//int check_sys()
//{
//	//匿名
//	union 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;
//	//返回1，表示小端
//	//返回0，表示大端
//	return u.c;
//}
//
//int main()
//{
//	int a =1;
//	int ret = check_sys();
//	if (1 ==ret)
//		printf("小端\n");
//	else
//		printf("大端\n");
//
//	//低地址------------>高地址
//	//...[][][][][11][22][33][44][][][][][]... 大端字节序存储模式
//	//...[][][][][44][33][22][11][][][][][]... 小端字节序存储模式
//	//讨论一个数据，放在内存中的存放的字节顺序
//	//大小端字节序问题
//
//
//	return 0;
//}

union Un
{
	int a;//4
	char arr[5];//5
};
int main()
{
	union Un u;
	printf("%zd\n", sizeof(u));//8
	return 0;
}