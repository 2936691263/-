#pragma once
#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

typedef int LTDataType;

struct ListNode
{
	struct ListNode* next;
	struct ListNode* prev;
	LTDataType data;
};
typedef struct ListNode ListNode;

ListNode* ListInit();

void ListPrint(ListNode* phead);

void ListDestroy(ListNode* phead);

void ListPushBack(ListNode* phead, LTDataType x);
void ListPushFront(ListNode* phead, LTDataType x);
void ListPopBack(ListNode* phead);
void ListPopFront(ListNode* phead);

ListNode* ListFind(ListNode* phead, LTDataType x);

void ListInsert(ListNode* pos, LTDataType x);

void ListErase(ListNode* pos);