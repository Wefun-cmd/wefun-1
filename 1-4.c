#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>
//struct stu
//{
//	char name[20];
//	int age;
//	double score;
//};
//struct stu s1;
//struct//匿名结构体（仅用一次）
//{
//	char name[20];
//	int age;
//}ss;//匿名结构体即使成员相同，在编译器看来也不同

//typedef struct Node
//{
//	int data;//数据域
//	struct Node* next;//指针域
//}Node;
typedef struct s
{
	char a;
	char b;
	int c;
};
typedef struct s1
{
	char b;
	int a;
	char c;
};
int main()
{
	struct s1 n1;
	struct s n2;
	printf("%d\n", sizeof(n2));
	printf("%d\n", sizeof(n1));
	return 0;
}