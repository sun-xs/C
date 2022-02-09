#define _CRT_SECURE_NO_WARNINGS 1

#include <stdio.h>
#include <string.h>


//size_t==unsigned int
//int main()
//{
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}
#include <assert.h> 
char* my_strcpy(char* dest, const char* src)
{
	assert(dest != NULL);
	assert(src != NULL);
	char* ret = dest;
	//拷贝src指向的字符串到dest指向的空间，包含'\0'
	while (*dest++ = *src++)
	{
		;
	}

}
int main()
{
	char arr1[] = "abcdefg";
	char arr2[] = "bit";
	
	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);

	return 0;
}