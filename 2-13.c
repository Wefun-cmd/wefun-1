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
//�������ʱ����̬������ڴ��ɲ���ϵͳ�Զ����գ�������򲻽�������̬�ڴ治���Զ����գ��ͻ�����ڴ�й¶��
int main()
{
	int* p = (int*)calloc(10, sizeof(int));//����Ŀռ�ᱻ��ʼ����0
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}
	free(p);
	return 0;
}