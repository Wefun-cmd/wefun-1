#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SList.h"
//��һ������Ϊn����������������ֶ���0��n - 1�ķ�Χ�ڡ� ������ĳЩ�������ظ��ģ�����֪���м����������ظ��ġ�Ҳ��֪��ÿ�������ظ����Ρ����ҳ�����������һ���ظ������֡� ���磬������볤��Ϊ7������[2, 3, 1, 0, 2, 5, 3]����ô��Ӧ�������2����3�����ڲ��Ϸ�������Ļ���� - 1
//���ݷ�Χ��0��n��10000

// int duplicate(int* numbers, int numbersLen ) {
//     // write code here
//     for (int i = 0; i < numbersLen; i++) {
//         if (numbers[i] != i) {
//             if (numbers[i] == numbers[numbers[i]])
//                 return numbers[i];
//             int temp = numbers[numbers[i]];
//             numbers[numbers[i]] = numbers[i];
//             numbers[i] = temp;
//             i--;
//         }
//     }
//     return -1;
// }


//int duplicate(int* numbers, int numbersLen) {
//    int num[numbersLen];
//    int i;
//    //�����ʼ��
//    for (i = 0; i < numbersLen; i++) {
//        num[i] = 0;
//    }
//    //���ո�����number���飬��Ӧ��num������м����������ж��ٸ��ظ�������
//    for (i = 0; i < numbersLen; i++) {
//        num[numbers[i]]++;
//    }
//    for (i = 0; i < numbersLen; i++) {
//        if (num[numbers[i]] > 1)
//            return numbers[i];
//    }
//    return -1;
//}


// bool Find(int target, int** array, int arrayRowLen, int* arrayColLen ) 
// {
//     // write code here
//     int i=0;
//     int j=*arrayColLen -1;
//     while(i<arrayRowLen&&j>=0)
//     {
//         if((*(*array+j)+i)<target)
//         {
//             i++;
//         }
//         else if((*(*array+j)+i)>target)
//         {
//             j--;
//         }
//         else 
//         {
//             return true;
//         }
//     }
//     return false;
// } 
//bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
//    for (int i = 0; i < arrayRowLen; i++) {
//        for (int j = 0; j < *arrayColLen; j++) {
//            if (array[i][j] == target) {
//                return true;
//            }
//        }
//    }
//    return false;
//}