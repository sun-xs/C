#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>
#include<string.h>
#include<assert.h>
//struct S
//{
//	char name[20];
//	int age;
//};
//
//void* my_memcpy(void* dest, const void* src,size_t num)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	
//	while (num--)
//	{
//		*(char*)dest = *(char*)src;
//		++(char*)dest;
//		++(char*)src;
//	}
//	return ret;
//
//}

//int main()
//{
//	/*int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };*/
//	struct S arr3[] = { {"����",20},{"����",18} };
//	struct S arr4[3] = { 0 };
//
//	/*int ret = sizeof(arr3)/strlen(arr3);
//	printf("%d\n", ret);*/
//	my_memcpy(arr4, arr3, sizeof(arr3));
//	
//	//memcpy(arr4, arr3,sizeof(arr3));
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	return 0;
//}

//C���Ա�׼
//memcpy ��Ҫ���� ���ص����ڴ濽��	--60  --100
//memmove �����ص��ڴ�Ŀ���	--100
//void* my_memmove(void* dest, const void* src, size_t count)
//{
//	void* ret = dest;
//	assert(dest != NULL);
//	assert(src != NULL);
//	if (dest < src)
//	{
//		//��ǰ��󿽱�
//		while (count--)
//		{
//			*(char*)dest = *(char*)src;
//			++(char*)dest;
//			++(char*)src;
//		}
//	}
//		
//	else 
//	{
//		//�Ӻ���ǰ����
//		while (count--)
//		{
//			*((char*)dest + count) = *((char*)src+count);
//		}
//	}
//	return ret;
//
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	//my_memcpy(arr+2,arr,20)
//
//	//memmove(arr + 2, arr, 20);	//memmove	-�����ڴ����õ����
//
//	my_memmove(arr, arr+2, 20);
//	for (i = 0; i < 10; i++)
//		printf("%d", arr[i]);
//	return 0;
//}

//memcmp

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[] = { 1,2,5,4,3 };
//	int ret=memcmp(arr1, arr2, 9);
//	printf("%d\n", ret);
//	return 0;
//}

//memset	-�ڴ�����

int main()
{
	/*char arr[10] = "";
	memset(arr,'#',10);*/

	int arr[10] = { 0 };

	//40���ֽ�
	//01 01 01 01 01 01 01 01 01 01 00 00...

	memset(arr, 1, 10);
	return 0;
}