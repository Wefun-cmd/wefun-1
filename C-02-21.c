//#include<stdio.h>//有序序列插入一个数
//int main()
//{
//	int a[55], n, i, x;
//	scanf("%d", &n);
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d ", &a[i]);
//	}
//	scanf("%d", &x);
//	for (i = n; i > 0; i--)
//	{
//		//排序
//		if (a[i - 1] >= x)
//		{
//			a[i] = a[i - 1];
//		}
//		else
//		{
//			a[i] = x;
//			break;
//		}
//	}
//	if (i == 0)
//		a[i] = x;
//	for (i = 0; i <= n; i++)
//	{
//		if (i == n)
//			printf("%d\n", a[i]);
//		else
//			printf("%d ", a[i]);
//	}
//}
//#include<stdio.h>//筛选法求素数
//int main()
//{
//	int n, count;
//	while (scanf("%d", &n) != EOF)
//	{
//		int i, j;
//		for (i = 2; i <= n; i++)
//		{
//			for (j = 2; j <= i; j++)
//			{
//				if (i % j == 0)
//					break;
//			}
//			if (i == j)
//			{
//				printf("%d ", i);
//				count++;
//			}
//		}
//	}
//	printf("\n");
//	printf("%d ", n - count - 1);
//	return 0;
//}
//#include<stdio.h>//图像相似度
//int main()
//{
//	int m, n;
//	int a[100][100], b[100][100];
//	scanf("%d %d", &m, &n);
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &a[i][j]);
//		}
//	}
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			scanf("%d", &b[i][j]);
//		}
//	}
//	int c = m * n;
//	float k = 0, sum;
//	for (int i = 0; i < m; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (a[i][j] == b[i][j])
//			{
//				k++;
//			}
//		}
//	}
//	sum = (k / c) * 100.0;
//	printf("%.2f", sum);
//	return 0;
//}
//#include<stdio.h>//登录验证，使用strcmp函数
//#include<string.h>
//int main()
//{
//	char a[100], b[100];
//	char str1[7] = "admin";
//	char str2[7] = "admin";
//	while (scanf("%s %s", a, b) != EOF)
//	{
//		if (strcmp(a, str1) == 0 && strcmp(b, str2) == 0)
//		{
//			printf("Login Success!");
//		}
//		else
//		{
//			printf("Login Fail!");
//		}
//	}
//	return 0;
//}
//#include<stdio.h>//平均身高
//int main()
//{
//	float a, b, c, d, e, arg;
//	scanf("%f %f %f %f %f", &a, &b, &c, &d, &e);
//	arg = (a + b + c + d + e) / 5;
//	printf("%.2f\n", arg);
//	return 0;
//}
//#include<stdio.h>//被5整除问题
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	if (a % 5 == 0)
//		printf("YES\n");
//	else
//		printf("NO\n");
//	return 0;
//}
//#include<stdio.h>//一个简单函数
//int main()
//{
//	int x;
//	scanf("%d", &x);
//	if (x < 0)
//		printf("1\n");
//	else if (x == 0)
//		printf("0\n");
//	else
//		printf("-1\n");
//	return 0;
//}
//#include<stdio.h>//输入课程成绩并显示
//int main() {
//	int a[10], i, j;
//	for (i = 0; i < 10; i++)
//		scanf("%d", &a[i]);
//	for (j = 0; j < 10; j++)
//		printf("%d ", a[j]);
//}
//#include <stdio.h>//统计9的个数
//int main()
//{
//    int i, temp = 0, temp1 = 0, temp2 = 0;
//    int sum = 0;
//    for (i = 1; i < 2020; i++)
//    {
//        temp = (i / 100) % 10;
//        temp1 = i / 10 % 10;
//        temp2 = i % 10;
//        if ((temp == 9) || (temp1 == 9) || (temp2 == 9))
//        {
//            sum += 1;
//        }
//    }
//    printf("%d", sum);
//    return 0;
//}
//#include<stdio.h>//统计奇偶数字
//int main()
//{
//    int i, N, a = 0, b = 0;
//    scanf("%d", &N);
//    for (i = 1; i <= N; i++)\
//    {
//        if (i % 2 == 1)
//            a++;
//        else
//            b++;
//    }
//    printf("%d %d", a, b);
//    return 0;
//}
//#include<stdio.h>//密码验证
//#include<string.h>
//int main()
//{
//    char ch1[100], ch2[100];
//    scanf("%s %s", &ch1, &ch2);
//    if (strcmp(ch1, ch2) == 0)
//        printf("same\n");
//    else
//        printf("different\n");
//    return 0;
//}
//#include<stdio.h>//输入NxM矩阵，矩阵元素均为整数，计算其中大于零的元素之和。
//int main()
//{
//    int n, m, i, j, sum;
//    scanf("%d %d", &n, &m);
//    int a[n][m];
//    sum = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            scanf("%d", &a[i][j]);
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            if (a[i][j] > 0)
//            {
//                sum = sum + a[i][j];
//            }
//        }
//    }
//    printf("%d\n", sum);
//    return 0;
//}
//#include<stdio.h>//逆序输出
//int main()
//{
//    long arr[10] = { 0 };
//    int i;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%ld ", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//        printf("%ld ", arr[i]);
//    return 0;
//}
//#include<stdio.h>//统计数据正负数个数
//int main()
//{
//    long arr[10] = { 0 };
//    int i;
//    int p = 0;
//    int n = 0;
//    for (i = 0; i < 10; i++)
//    {
//        scanf("%ld ", &arr[i]);
//    }
//    for (i = 9; i >= 0; i--)
//    {
//        if (arr[i] > 0)
//            p = p + 1;
//        else if (arr[i] < 0)
//            n += 1;
//    }
//    printf("positive:%d\n", p);
//    printf("negative:%d\n", n);
//    return 0;
//}
//#include <stdio.h>//求n个数之和
//int main()
//{
//    int a[50];
//    int n;
//    int i;
//    scanf("%d", &n);
//    for (i = 0; i < n; i++) {
//        scanf("%d", &a[i]);
//    }
//    int sum = 0;
//    for (i = 0; i < n; i++) {
//        sum = sum + a[i];
//    }
//    printf("%d", sum);
//}
#include<stdio.h>//最大数减最小数的值
int main()
{
    int n, i, arr[10000];
    int min = 100;
    int max = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (max < arr[i])
            max = arr[i];
        if (min > arr[i])
            min = arr[i];
    }
    printf("%d\n", max-min);
    return 0;
}
#include<stdio.h>//判断是否顺序
int main()
{
    int n, i, arr[50];
    int count = 0;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d ", &arr[i]);
    }
    for (i = 0; i <= n - 1; i++)
    {
        if (arr[i] <= arr[i + 1])
            count++;
    }
    if (count >= n - 2 || count == 0)
        printf("sorted\n");
    else
        printf("unsorted\n");
    return 0;
}
#include <stdio.h>


int main()
{
    int n = 0;
    int arr[50] = { 0 };
    scanf("%d", &n);
    int i = 0;
    int flag1 = 0;
    int flag2 = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if (i > 0)
        {
            if (arr[i] > arr[i - 1])
                flag1 = 1;
            else if (arr[i] < arr[i - 1])
                flag2 = 1;
        }
    }
    //flag1 和 flag2 都为1是乱序的
    if (flag1 + flag2 > 1)
        printf("unsorted\n");
    else
        printf("sorted\n");
    return 0;
}


