#include "seqlist.h"

void TestSeqList1()
{
	SL s1;
	SeqListInit(&s1);
	SeqListPushBack(&s1, 1);
	SeqListPushBack(&s1, 2);
	SeqListPushBack(&s1, 3);
	SeqListPushBack(&s1, 4);
	SeqListPushBack(&s1, 5);
	SeqListPushBack(&s1, 6);
	SeqListPushBack(&s1, 7);
	SeqListPushBack(&s1, 8);
	SeqListPushBack(&s1, 9);
	SeqListPushBack(&s1, 10);
	SeqListPushBack(&s1, 11);
	SeqListPushBack(&s1, 12);
	SeqListPushBack(&s1, 13);
	SeqListPushBack(&s1, 14);
	SeqListPushFront(&s1, 0);
	SeqListPrint(&s1);
}

int main()
{
	TestSeqList1();
	return 0;
}