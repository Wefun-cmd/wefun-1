#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
//void getmemory(char* p)//内存泄露
//{
//	p = (char*)malloc(100);
//}
//void test(void)//对空指针的解引用
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

//void test(void)//对空指针的解引用
//{
//	char* str = NULL;
//	getmemory(str);
//	strcpy(str, "helloworld");
//	printf("str");
//}

//char getmemory(void)//返回栈空间地址的问题（野指针）
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
//void Test(void)//内存未释放
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
//	int a[0];//柔性数组成员
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
//__FILE__  //进行编译的源文件
//__LINE__  //文件当前的行号
//__DATE__  //文件被编译的日期
//__TIME__  //文件被编译的时间
