#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
/**������̬�ڴ����**/
/**��NULLָ��Ľ����ò���**/
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//p��ֵ����ΪNULL
//	free(p);
//}
/**�Զ�̬���ٿռ��Խ�����**/
//void test()
//{
//	int i = 0;
//	int* p = (int*)malloc(10 * sizeof(int));
//	if (NULL == p)
//	{
//		exit(EXIT_FAILURE);
//	}
//	for (i = 0; i <= 10; i++)
//	{
//		*(p + i) = i;//p��ֵ��10���������
//	}
//	free(p);
//}
/**�ԷǶ�̬�����ڴ�ʹ��free�ͷ�**/
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}
/**ʹ��free�ͷ�һ�鶯̬�����ڴ��һ����**/
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);
//}
/**��ͬһ��̬�ڴ����ͷ�**/
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);
//}
/**��̬�����ڴ������ͷţ������ڴ�й©��**/
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
/**��������**/
//typedef struct st_type
//{
//	int i;
//	int a[0];
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
//		//test();
//	//while (1);
//	/*int* ptr = malloc(100);
//	if (ptr != NULL)
//	{
//		printf("success\n");
//	}
//	else
//	{
//		exit(EXIT_FAILURE);
//	}
//	ptr = realloc(ptr, 1000000);
//	int* p = NULL;
//	p = realloc(ptr, 1000);
//	if(p != NULL)
//	{
//		ptr = p;
//	}
//	free(ptr);*/
//	return 0;
//}
int main()
{
	//���ļ�
	char arr[256] = { 0 };
	FILE* pf = fopen("test.txt", "r");
	if (pf == NULL)
	{
		perror("fopen");
		return 1;
	}
	fgets(arr, 255, pf);
	printf("%s\n", arr);
	fclose(pf);
	pf = NULL;
	//FILE* pf = fopen("test.txt", "w");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	//fputs("fjqpoufo0p1", pf);
	//fclose(pf);
	//pf = NULL;
	/*int ch = fgetc(stdin);
	printf("%c\n", ch);*/
	//FILE* pf = fopen("test.txt", "r");
	//if (pf == NULL)
	//{
	//	perror("fopen");
	//	return 1;
	//}
	///*fputc('a', pf);*/
	///*char ch = 'a';
	//for (ch = 'a'; ch <= 'z'; ch++)
	//{
	//	fputc(ch, pf);
	//}*/
	//int ch = 0;
	//while ((ch = fgetc(pf)) != EOF)
	//{
	//	printf("%c ", ch);
	//}
	//fclose(pf);
	//pf = NULL;
	return 0;
}