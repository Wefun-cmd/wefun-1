#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////���0��100000֮������С�ˮ�ɻ������������
int main()
{
	int i = 0;
	for (i = 0; i <= 999999; i++)
	{
		int count = 1;
		int tmp = i;
		int sum = 0;
		//�ж�i�Ƿ�Ϊˮ�ɻ���
		//1. ���ж����ֵ�λ��
		while (tmp / 10)
		{
			count++;
			tmp = tmp / 10;
		}

		//2. ����ÿһλ�Ĵη���
		tmp = i;
		while (tmp)
		{
			sum += pow(tmp % 10, count);
			tmp = tmp / 10;
		}

		//3. �ж�
		if (sum == i)
			printf("%d ", i);
	}
	return 0;
}
////��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
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
//дһ����������������һ���ַ���������
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