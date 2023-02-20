#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
/**常见动态内存错误**/
/**对NULL指针的解引用操作**/
//void test()
//{
//	int* p = (int*)malloc(INT_MAX / 4);
//	*p = 20;//p的值可能为NULL
//	free(p);
//}
/**对动态开辟空间的越界访问**/
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
//		*(p + i) = i;//p的值是10，会出问题
//	}
//	free(p);
//}
/**对非动态开辟内存使用free释放**/
//void test()
//{
//	int a = 10;
//	int* p = &a;
//	free(p);
//}
/**使用free释放一块动态开辟内存的一部分**/
//void test()
//{
//	int* p = (int*)malloc(100);
//	p++;
//	free(p);
//}
/**对同一动态内存多次释放**/
//void test()
//{
//	int* p = (int*)malloc(100);
//	free(p);
//	free(p);
//}
/**动态开辟内存忘记释放（导致内存泄漏）**/
//void test()
//{
//	int* p = (int*)malloc(100);
//	if (NULL != p)
//	{
//		*p = 20;
//	}
//}
/**柔性数组**/
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
	//读文件
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