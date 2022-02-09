#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//
//	//1.在str1字符串中追加一个str1字符串
//	//strcat(str1,str1);	//err
//	strncat(str1, str1, 6);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr  找子串
//	char* ret = strstr(str1, str2);
//	if (ret == NULL)
//		return 0;
//	else
//		return 1;
//
//
//}
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("YES");
//	else
//		printf("NO");
//
//	return 0;
//}

//杨式矩阵
//题目内容
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的
//请编写程序在这样的矩阵中查找某个数字是否存在。
//要求：时间复杂度小于0（N）；
//123
//456
//789

//123
//234
//456

//int FindNum(int arr[3][3], int k, int* px, int* py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <= *px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//return 0;
//}
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k = 7;
//	int x = 3;
//	int y = 3;
//
//	//返回型参数
//	int ret = FindNum(arr, k, &x, &y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是：%d %d", x, y);
//	}
//	else
//		printf("找不到");
//	return 0;
//}