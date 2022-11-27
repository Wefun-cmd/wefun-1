#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////求出0～100000之间的所有“水仙花数”并输出。
int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//判断i是否为水仙花数
		//1. 求判断数字的位数
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. 计算每一位的次方和
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. 判断
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}
////求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
//int main()
//{
//	int a=0;
//	while(~(scanf("%d", &a)))
//	{
//		for (int i = 1; i < 5; i++)
//		{
//			a += a*pow(10, i);
//		}
//		printf("%d", a);
//	}
//	
//}
//写一个函数，可以逆序一个字符串的内容
//void reverse(char* str)
//{
//	char* left = str;
//	char* right = str + strlen(str) - 1;
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		++left;
//		--right;
//	}
//}
//int main()
//{
//	char str[101] = { 0 };
//	while (gets(str))
//	{
//		reverse(str);
//		printf("%s\n", str);
//		memset(str, 0, sizeof(str) / sizeof(str[0]));
//		
//	}
//	return 0;
//}
//int main()
//{
//	int arr[3] = { 1,2,3 };
//	int* p = arr;
//	for (int i = 0; i < 3; i++)
//	{
//		printf("%d ", *(p + i));
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5 };
//	short* p = (short*)arr;
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		*(p + i) = 0;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("&d ", arr[i]);
//	}
//	return 0;
//}