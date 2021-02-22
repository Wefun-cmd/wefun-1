////#include<stdio.h>//序列中除去m
////int main()
////{
////    int n, m, arr[50], i;
////    scanf("%d", &n);
////    for (i = 0; i < n; i++)
////        scanf("%d", &arr[i]);
////    scanf("%d", &m);
////    for (i = 0; i < n; i++)
////    {
////        if (arr[i] == m)
////            continue;
////        else
////            printf("%d ", arr[i]);
////    }
////    return 0;
////}
//#include<stdio.h>//序列中除去相同数字
//int main()
//{
//	int i, j, n;
//	scanf("%d", &n);
//	int a[1000];
//	for (i = 0; i < n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for (i = n - 1; i >= 0; i--)
//	{
//		for (j = i - 1; j >= 0; j--)
//		{
//			if (a[i] == a[j])
//			{
//				a[i] = 0;
//			}
//		}
//	}
//	for (i = 0; i < n; i++)
//	{
//		if (a[i] != 0)
//		{
//			printf("%d ", a[i]);
//		}
//	}
//	return 0;
//}
//#include <stdio.h>//两个有序数列的合并
//int main()
//{
//    int n = 0;
//    int m = 0;
//    int arr1[100] = { 0 };
//    int arr2[100] = { 0 };
//    //输入
//    scanf("%d %d", &n, &m);
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr1[i]);
//    }
//    for (i = 0; i < m; i++)
//    {
//        scanf("%d", &arr2[i]);
//    }
//    //处理
//    int j = 0;
//    i = 0;
//    while (i < n && j < m)
//    {
//        if (arr1[i] < arr2[j])
//        {
//            printf("%d ", arr1[i]);
//            i++;
//        }
//        else
//        {
//            printf("%d ", arr2[j]);
//            j++;
//        }
//    }
//    if (i == n)
//    {
//        for (; j < m; j++)
//        {
//            printf("%d ", arr2[j]);
//        }
//    }
//    else
//    {
//        for (; i < n; i++)
//        {
//            printf("%d ", arr1[i]);
//        }
//    }
//    return 0;
//}

#include<stdio.h>//序列重组矩阵
int main()
{
    int n,m,  i, a[100];
    scanf("%d %d", &m, &n);
    int flag = 0;
    for (i = 0; i < n * m; i++)
    {
        scanf("%d ", &a[i]);
        flag++;
        printf("%d ", a[i]);
        if (flag % m == 0)
            printf("\n");
    }
    return 0;
}
#include<stdio.h>//找最高个
int main()
{
    int n, m, i, j, a[10][10];
    int t = 0;
    scanf("%d %d", &n, &m);
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
            scanf("%d ", &a[i][j]);
        if (t < a[i][j])
            t = a[i][j];
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            if (a[i][j] == t)
                goto p;
        }
    }
p:printf("%d %d\n", i, j);
    return 0;
}
#include<stdio.h>//矩阵相等与否的判断
int main()
{
    int n = 0, m = 0;
    scanf("%d%d", &n, &m);
    int i = 0, j = 0;
    int arr[10][10] = { 0 };
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            int tmp = 0;
            scanf("%d", &tmp);
            if (tmp != arr[i][j]) {
                break;
            }
        }
        if (j != m) {
            break;
        }
    }
    if (i != n) {
        printf("No\n");
    }
    else {
        printf("Yes\n");
    }
    return 0;
}
#include <stdio.h>//上三角矩阵判断
int main()
{
    int n;
    scanf("%d", &n);
    int i = 0;//行号
    int j = 0;//列号
    int arr[10][10];
    int max = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (i = 1; i <= n - 1; i++)
    {
        for (j = 0; j < i; j++)
        {
            if (0 == arr[i][j])
                max++;
        }
    }
    if (max == (n * n - n) / 2)
        printf("YES\n");
    else
        printf("NO\n");
    return 0;
}
#include<stdio.h>//矩阵转置
int main()
{
    int n, m;
    scanf("%d %d", &n, &m);
    int arr[n][m];
    int ret[m][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            scanf("%d ", &arr[i][j]);
            ret[j][i] = arr[i][j];
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            printf("%d ", ret[i][j]);
        }
        printf("\n");
    }
}