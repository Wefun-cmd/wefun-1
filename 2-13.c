#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
//int main()
//{
//	int arr1[10];
//	int* ptr = (int*)malloc(50);
//	int* p = ptr;
//	if (p == NULL)
//	{
//		perror("malloc");
//		return 1;
//	}
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*p = i;
//		p++;
//	}
//	free(ptr);
//	return 0;
//}
//程序结束时，动态申请的内存由操作系统自动回收；如果程序不结束，动态内存不会自动回收，就会造成内存泄露。
int main()
{
	int* p = (int*)calloc(10, sizeof(int));//申请的空间会被初始化成0
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	return 0;
}