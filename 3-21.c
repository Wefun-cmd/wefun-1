#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SList.h"
//在一个长度为n的数组里的所有数字都在0到n - 1的范围内。 数组中某些数字是重复的，但不知道有几个数字是重复的。也不知道每个数字重复几次。请找出数组中任意一个重复的数字。 例如，如果输入长度为7的数组[2, 3, 1, 0, 2, 5, 3]，那么对应的输出是2或者3。存在不合法的输入的话输出 - 1
//数据范围：0≤n≤10000

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
//    //数组初始化
//    for (i = 0; i < numbersLen; i++) {
//        num[i] = 0;
//    }
//    //按照给定的number数组，对应的num数组进行计数，计算有多少个重复的数字
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