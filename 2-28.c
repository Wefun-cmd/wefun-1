#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"SList.h"
//»•÷ÿ(ª≠Õº∑÷Œˆ¬ﬂº≠)
//int removeDuplicates(int* nums, int numsSize)
//{
//	if (numsSize == 0)
//	{
//		return 0;
//	}
//	int i = 0, j = 1;
//	int dst = 0;
//	while (j < numsSize)
//	{
//		if (nums[i] == nums[j])
//		{
//			++j;
//		}
//		else
//		{
//			nums[dst] = nums[i];
//			++dst;
//			i = j;
//			++j;
//		}
//	}
//	nums[dst] = nums[i];
//	++dst;
//	return dst;
//}

void SListPrint(SLTNode* phead)
{
	SLTNode* cur = phead;
	while (cur != NULL)
	{
		printf("%d->",cur->data);
		cur = cur->next;
	}
	printf("\n");
}
void SListPushBack(SLTNode** pphead,SLTDataType x)
{
	SLTNode* newnode = BuyListNode(x);
	if (*pphead == NULL)
	{
		*pphead = newnode;
	}
	else
	{
		SLTNode* tail = *pphead;
		while (tail->next != NULL)
		{
			tail = tail->next;
		}

		tail->next = newnode;
	}
}
void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	/*SListPrint(plist);
	SListPushFront(&plist, 1);
	SListPushFront(&plist, 2);
	SListPushFront(&plist, 3);
	SListPushFront(&plist, 4);*/
	SListPopBack(&plist);
	SListPrint(plist);
}
SLTNode* BuyListNode(SLTDataType x)
{
	SLTNode* newnode = malloc(sizeof(SLTNode));
	if (newnode == NULL)
	{
		printf("malloc fail\n");
		exit(-1);
	}
	newnode->data = x;
	newnode->next = NULL;
	return newnode;
}
void SListPushFront(SLTNode** pphead, SLTDataType x)
{
	SLTNode* newNode = BuyListNode(x);
	newNode->next = *pphead;
	*pphead = newNode;
}
void SListPopBack(SLTNode** pphead)
{
	SLTNode* prev = NULL;
	SLTNode* tail = *pphead;
	//while(tail->next!=NULL)
	while (tail->next)
	{
		prev = tail;
		tail = tail->next;
	}
	free(tail);
	tail = NULL;
	prev->next = NULL;
}
int main()
{
	TestSList1();
	return 0;
}