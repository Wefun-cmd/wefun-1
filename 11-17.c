#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	const char* p1 = "abcdef";
	const char* p2 = "abcdef";
	char arr1[] = "abcdef";
	char arr2[] = "abcdef";
	if (p1 == p2)
	{
		printf("p1=p2\n");
	}
	else
	{
		printf("p1!=p2\n");
	}
	if (arr1 == arr2)
	{
		printf("arr1=arr2\n");
	}
	else
	{
		printf("arr1!=arr2\n");
	}
	return 0;
}