
#include<stdio.h>
#include<string.h>
#include<stdlib.h>

typedef int SQDateType;

typedef struct SeqList
{
	SQDateType* a;
	int size;
	int capacity;
}SL;

void SeqListInit(SL*ps);

void SeqListPrint(SL*ps);

void SeqListPushBack(SL*ps, SQDateType x);
void SeqListPushFront(SL*ps, SQDateType x);
void SeqListPopBack(SL*ps, SQDateType x);
void SeqListPopFront(SL*ps, SQDateType x);