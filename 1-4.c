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
//struct//�����ṹ�壨����һ�Σ�
//{
//	char name[20];
//	int age;
//}ss;//�����ṹ�弴ʹ��Ա��ͬ���ڱ���������Ҳ��ͬ

//typedef struct Node
//{
//	int data;//������
//	struct Node* next;//ָ����
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