#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void getmemory(char* p)//�ڴ�й¶
//{
//	p = (char*)malloc(100);
//}
//void test(void)//�Կ�ָ��Ľ�����
//{
//	char* str = NULL;
//	getmemory(str);
//	strcpy(str, "helloworld");
//	printf("str");
//}
//void getmemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void test(void)
//{
//	char* str = NULL;
//	getmemory(&str);
//	strcpy(str, "helloworld");
//	printf(str);
//	free(str);
//	str = NULL;
//}

//void test(void)//�Կ�ָ��Ľ�����
//{
//	char* str = NULL;
//	getmemory(str);
//	strcpy(str, "helloworld");
//	printf("str");
//}

//char getmemory(void)//����ջ�ռ��ַ�����⣨Ұָ�룩
//{
//	char p[] = "hello world";
//	return p;
//}
//void test(void)
//{
//	char* str = NULL;
//	str = getmemory();
//	printf(str);
//}

//void GetMemory(char** p, int num)
//{
//	*p = (char*)malloc(num);
//}
//void Test(void)//�ڴ�δ�ͷ�
//{
//	char* str = NULL;
//	GetMemory(&str, 100);
//	strcpy(str, "hello");
//	printf(str);
//}


//int main()
//{
//	Test();
//	return 0;
//}
//typedef struct st_type
//{
//	int i;
//	int a[0];//���������Ա
//}type_a;
//int main()
//{
//	int i = 0;
//	type_a* p = (type_a*)malloc(sizeof(type_a) + 100 * sizeof(int));
//	p->i = 100;
//	for (i = 0; i < 100; i++)
//	{
//		p->a[i] = i;
//	}
//	free(p);
//	return 0;
//}
//__FILE__  //���б����Դ�ļ�
//__LINE__  //�ļ���ǰ���к�
//__DATE__  //�ļ������������
//__TIME__  //�ļ��������ʱ��
