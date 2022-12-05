#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>
void test(void)
{
	printf("hehe\n");
}
int main()
{
	printf("%p\n", test);
	printf("%p", &test);
	return 0;
}
//void (*signal(int, void(*p)(int)))(int);
////void(*)(int)signal(int,void(*p)(int));
//typedef void(* pf_t)(int);
//pf_t signal(int, pf_t);        
//int add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	char* arr[5];
//	int* arr2[4];
//	int (*pf1)(int, int) = add;
//	int (*pf[4])(int, int) = { add,sub,mul,div };
//	return 0;
//}