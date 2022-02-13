#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
//枚举顾名思义 -列举

//枚举优点
//1.增加代码可读性和可维护性
//2.和 #define 定义的标识符比较枚举有类型检查，更加严谨
//3.防止了命名污染（封装）
//4.便于调试
//5.使用方便，一次可以定义多个常量

//枚举类型
//enum Sex
//{
//	//枚举的可能取值-常量 
//	MALE = 2,
//	FEMALE,
//	SECRET = 8
//};
//enum Color
//{
//	RED,//0
//	GREEN,//1
//	BLUE//2
//};

//C语言的源代码->预编译->编译->链接->可执行程序
//#define RED 0
//#define GREEN 1
//#define BLUE 2

//int main()
//{
//	/*enum Sex s = MALE;
//	enum Color c = BLUE;*/
//	
//	//enum Color c = 2;//int
//	//int color = RED;
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n", MALE, FEMALE, SECRET);
//
//	return 0;
//}