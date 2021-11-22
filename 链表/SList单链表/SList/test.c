#include"SList.h"

void TestSList1()
{
	SLTNode* plist = NULL;
	SListPushBack(&plist, 1);
	SListPushBack(&plist, 2);
	SListPushBack(&plist, 3);
	SListPushBack(&plist, 4);
	SListPushFront(&plist, 0);
	SlistPopFront(&plist);
	SlistPopBack(&plist);
	SListPrint(plist);
	SLTNode*pos = SListFind(plist, 3);
	if (pos)
	{
		SListInsert(&plist, pos, 30);
	}
	SListPrint(plist);
	pos = SListFind(plist, 30);
	if (pos)
	{
		SListErase(&plist, pos);
	}
	SListPrint(plist);
}

int main()
{
	TestSList1();
	return 0;
}