#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

//int strncmp(const char* string1,const char* string2,size_t count)��

//int main()
//{
//	//strncmp �ַ����Ƚ�
//	const char* p1 = "abcdef";
//	char* p2 = "abcqwer";
//	//int ret = strcmp(p1, p2);
//	int ret = strncmp(p1, p2, 4);
//	printf("%d\n", ret);
//
//	return 0;
//}

//strstr -�����ַ���

#include<assert.h>

//char* my_strstr(const char* p1, const char* p2)
//{
//	assert(p1 != NULL);
//	assert(p2 != NULL);
//	char* s1 = NULL;
//	char* s2 = NULL;
//	char* cur = (char*)p1;
//	if (*p2 == '\0')
//	{
//		return (char*)p1;
//	}
//	while (*cur)
//	{
//		s1 = cur;
//		s2 = (char*)p2;
//
//		while (*s1 && *s2  && (*s1 == *s2))
//		{
//			s1++;
//			s2++;
//		}
//		if (*s2 == '\0')
//		{
//			return cur;//�ҵ��Ӵ�
//		}
//		if (*s1 == '\0')
//		{
//			return NULL;
//		}
//		cur++;
//	}
//	return NULL;//�Ҳ����Ӵ�
//}
//int main()
//{
//	char* p1 = "abbbcdbbcadef";
//	char* p2 = "bbc";
//
//	//char* ret = strstr(p1, p2);
//
//	char* ret = my_strstr(p1, p2);
//
//	if (ret == NULL)
//	{
//		printf("�ַ���������\n");
//	}
//	else
//	{
//		printf("%s\n", ret);
//	}
//	return 0;
//}
//
//int main()
//{
//	//192.168.1.1
//	//192 168 1 1  -strtok
//	//zpw@bitedu.tech  @.
//	//zpw bitedu tech	 -strtok
//
//	char arr[] = "zpw@bitedu.tech";
//	char* p = "@.";
//
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	
//	//�и�buf�е��ַ���
//
//	char* ret = NULL;
//	
//	for (ret = strtok(arr, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//	/*char* ret = strtok(arr, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);
//
//	ret = strtok(NULL, p);
//	printf("%s\n", ret);*/
//
//	return 0;
//}

#include<errno.h>
//
//int main()
//{
//	//������	������Ϣ
//	//0 -		No error
//	//1 -		Operation not permitted
//	//2	-		No such file or directory
//
//	//errno��һ��ȫ�ֵĴ��������
//	//��c���ԵĿ⺯����ִ�й����У������˴��󣬾ͻ�Ѷ�Ӧ�Ĵ����룬��ֵ��errno��
//
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//���ļ�
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file success\n");
//	}
//	return 0;
//}