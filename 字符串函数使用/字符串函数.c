#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include<string.h>
#include<assert.h>
//
//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//	}
//	//if (*str1 > *str2)
//	//	return 1;//����
//	//else
//	//	return -1;//С��
//	return (*str1 - *str2);
//
//}
//int main()
//{
//	char* p1 = "abcdef";
//	char* p2 = "qwert";
//	//int ret = strcmp(p1, p2);	//�ӵ�һ���ַ���ʼ�𲽱Ƚϴ�С
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//	
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdef";
//	char arr2[] = "bit";
//
//	strncpy(arr1, arr2, 4);
//	return 0;
//}
//