#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include <stdio.h>
#include <string.h>

//int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
//    int* ret = (int*)calloc(numsSize, sizeof(int));
//    *returnSize = numsSize;
//    int left = 1, right = 1;
//    for (int i = 0; i < numsSize; i++)
//    {
//        ret[i] = left;
//        left *= nums[i];
//    }
//    for (int i = numsSize - 1; i >= 0; i--)
//    {
//        ret[i] *= right;
//        right *= nums[i];
//    }
//    return ret;
//
//
//}
//int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[abs(nums[i]) - 1] > 0)
//        {
//            nums[abs(nums[i]) - 1] = -(nums[abs(nums[i]) - 1]);
//        }
//    }
//    int* ret = (int*)malloc(sizeof(int) * (numsSize));
//    *returnSize = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] > 0)
//        {
//            ret[*returnSize] = i + 1;
//            *returnSize += 1;
//        }
//    }
//    return ret;
//}
//
//int findMaxConsecutiveOnes(int* nums, int numsSize)
//{
//    int max_count = 0, tmp_count = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        if (nums[i] == 1)
//        {
//            tmp_count++;
//        }
//        else
//        {
//            max_count = max_count > tmp_count ? max_count : tmp_count;
//            tmp_count = 0;
//        }
//    }
//    max_count = max_count > tmp_count ? max_count : tmp_count;
//    return max_count;
//}
//����һ������������ nums �� ��������������� 1 �ĸ���
//
//#include <stdio.h>#include <math.h>int is_perfect_num(int num){    int sum=1;    for(int i=2;i<=sqrt(num);i++)    {        if(num%i == 0)        {            sum += i;            if(i != sqrt(num))            {                sum += num/i;            }        }    }    if(sum == num)        return 1;    else        return 0;}int main() {    int a;    while (scanf("%d", &a) != EOF)     {         int count = 0;        for(int i=2;i<=a;i++)        {            if(is_perfect_num(i))                count++;        }        printf("%d\n", count );    }    return 0;}
//
//��ȫ����Perfect number�����ֳ����������걸������һЩ�������Ȼ����
//
//�����е������ӣ����������������Լ�����ĺͣ������Ӻ�������ǡ�õ���������
//
//���磺28������Լ��1��2��4��7��14��28����ȥ������28�⣬����5������ӣ�1 + 2 + 4 + 7 + 14 = 28��
//
//����n�������n����(��n)��ȫ���ĸ�����


//int pivotIndex(int* nums, int numsSize) {
//    int i, j;
//    for (i = 0; i < numsSize; i++)
//    {
//        int l_sum = 0, r_sum = 0;
//        for (j = 0; j < numsSize; j++)
//        {
//            if (j < i)
//                l_sum += nums[j];
//            else if (j > i)
//                r_sum += nums[j];
//        }
//        if (l_sum == r_sum)
//        {
//            return i;
//        }
//    }
//    return -1;
//
//}

//int main() {
//    char arr[1024] = { 0 };
//    while (gets(arr))
//    {
//        int len = strlen(arr);
//        for (int i = 0; i < len; i++)
//        {
//            for (int j = 1; j < len - i; j++)
//            {
//                if (arr[j] < arr[j - 1])
//                {
//                    char tmp = arr[j - 1];
//                    arr[j - 1] = arr[j];
//                    arr[j] = tmp;
//                }
//            }
//        }
//        printf("%s\n", arr);
//    }
//    return 0;
//}
