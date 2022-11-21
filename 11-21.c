#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
void print1(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}
int main()
{
	int arr[10] = { 1,2,3,43,4,5,6,67,78,0 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	print1(arr, sz);
	return 0;
}