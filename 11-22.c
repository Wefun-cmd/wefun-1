#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
int* printNumbers(int n, int* returnSize) {
    *returnSize = pow(10, n) - 1;
    int* arr = (int*)malloc(sizeof(int) * (*returnSize));
    for (int i = 0; i < *returnSize; i++)
    {
        arr[i] = i + 1;
    }
    return arr;


}