#include<stdio.h>
#include<assert.h>
#include<string.h>
#include<stdlib.h>

typedef int SLTDataType;

struct SListNode
{
	SLTDataType data;
	struct SListNode* next;
};

typedef struct SListNode SLTNode;

void SListPrint(SLTNode* phead);

void SListPushBack(SLTNode** pphead, SLTDataType x);//尾插
void SListPushFront(SLTNode** pphead, SLTDataType x);
void SlistPopFront(SLTNode** pphead);
void SlistPopBack(SLTNode** pphead);

SLTNode* SListFind(SLTNode* pphead, SLTDataType x);
void SListInsert(SLTNode* pos, SLTNode** pphead, SLTDataType x);
void SListErase(SLTNode** pphead, SLTNode* pos);
