//#include<stdio.h>
//int main()
//{
//    int n, m, arr[10][10], i, j;
//    int a, b, k;
//    char t;
//    scanf("%d %d", &n, &m);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//            scanf("%d ", &arr[i][j]);
//    }
//    scanf("%d", &k);
//    scanf("%c %d %d", &t, &a, &b);
//    if (t == 'r')
//    {
//        for (i = 0; i < k; i++)
//        {
//            for (j = 0; j < m; j++)
//            {
//                int tmp = 0;
//                tmp = arr[a - 1][j];
//                arr[a - 1][j] = arr[b - 1][j];
//                arr[b - 1][j] = tmp;
//            }
//        }
//    }
//    else if (t == 'c')
//    {
//        for (j = 0; j < k; j++)
//        {
//            for (i = 0; i < n; i++)
//            {
//                int tmp1 = 0;
//                tmp1 = arr[i][a - 1];
//                arr[i][a - 1] = arr[i][b - 1];
//                arr[i][b - 1] = tmp1;
//            }
//        }
//    }
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//            printf("%d ", arr[i][j]);
//        printf("\n");
//    }
//    return 0;
//}
//#include<stdio.h>//杨辉三角
//int main()
//{
//    int n, i, j, arr[30][30];
//    scanf("%d", &n);
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j <= i; j++)
//        {
//            if (j == 0 || i == j)
//                arr[i][j] = 1;
//            else
//                arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//            printf("%5d", arr[i][j]);
//        }
//        printf("\n");
//    }
//
//    return 0;
//}
#include<stdio.h>//井字棋判断输赢
int main()
{
    char arr[3][3] = { 0 };
    int i, j, tmp=0;
    for (i = 0; i < 3; i++)
    {
        for (j = 0; j < 3; j++)
            scanf("%c ", &arr[i][j]);
        printf("\n");
    }
    for (i = 0; i < 3; i++)
    {
        if (arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2])
        {
            tmp = arr[i][0];
            break;
        }
        else if (arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i])
        {
            tmp = arr[0][i];
            break;
        }
    }
    if (arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2])
        tmp = arr[1][1];
    if (arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0])
        tmp = arr[1][1];
    if (tmp == 'K')
        printf("KiKi wins!");
    else if (tmp == 'B')
        printf("BoBo wins!");
    else
        printf("No winner!");
    return 0;
}
#include<stdio.h>//十进制转六进制
int main()
{
    int n;
    int arr[100];
    int i = 0;
    scanf("%d", &n);
    while (n != 0)
    {
        arr[i] = n % 6;
        n = n / 6;
        i++;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", arr[j]);
    printf("\n");
    return 0;
}
#include<stdio.h>//1~n相加
int main()
{
    int n, i;
    long sum = 0;
    scanf("%ld", &n);
    for (i = 1; i <= n; i++)
    {
        sum = sum + i;
    }
    printf("%ld\n", sum);
    return 0;
}
#include<stdio.h>//简单闹钟
int main()
{
    int fen, miao, miao2;
    scanf("%d:%d%d", &fen, &miao, &miao2);
    miao = miao + miao2;
    fen = (fen + miao / 60) % 24;
    miao %= 60;
    printf("%02d:%02d", fen, miao);
}
#include <stdio.h>
int main() {
    int n, t, i;
    scanf("%d", &n);
    printf("%d", (n / 12) * 4 + 2);
}
#include<stdio.h>//最大公约数和最小公倍数之和
int main()
{
    long m, n, r, o;
    scanf("%ld %ld", &m, &n);
    r = m % n, o = m * n;
    while (r != 0)
    {
        m = n;
        n = r;
        r = m % n;
    }
    printf("%ld\n", n + o / n);
}
#include <stdio.h>//数字重构，偶数改0，奇数改1
#include <math.h>
int main()
{
    int n, i, m, s;
    scanf("%d", &n);
    for (i = 0; i < 9; i++)
    {
        m = n % 10;
        if (m % 2 == 0)
            m = 0;
        else
            m = 1;
        n = n / 10;
        s = s + m * pow(10, i);
    }
    printf("%d", s);
    return 0;
}
int* singleNumber(int* nums, int numsSize, int* returnSize) {
    int ret = 0;
    for (int i = 0; i < numsSize; ++i)//将nums数组中所有元素依次按位异或，得到一个结果，即为两个只出现一次的数字异或
    {
        ret ^= nums[i];
    }
    //下一步想办法分离出待求的两个数字，找出ret里第M位为1，说明x1和x1第M位的数字不一样。一个是1，一个是0.
    int m = 0;
    while (m < 32)
    {
        if (ret & (1 << m))
            break;
        else
            ++m;
    }
    int t = 0, n = 0;
    int x1 = 0, x2 = 0;
    for (int i = 0; i < numsSize; ++i)
    {
        if (nums[i] & (1 << t))
        {
            x1 ^= nums[i];
        }
        else
        {
            x2 ^= nums[i];
        }
    }
    int* retArr = (int*)malloc(sizeof(int) * 2);
    retArr[0] = x1;
    retArr[1] = x2;
    *returnSize = 2;
    return retArr;
}