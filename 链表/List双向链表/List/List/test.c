#include"List.h"

void TestList1()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushFront(plist, 0);
	ListPopFront(plist);
	ListPopBack(plist);
	ListPrint(plist);

	ListDestroy(plist);
}

void TestList2()
{
	ListNode* plist = ListInit();
	ListPushBack(plist, 1);
	ListPushBack(plist, 2);
	ListPushBack(plist, 3);
	ListPushBack(plist, 4);
	ListPushFront(plist, 0);
	ListPopFront(plist);
	ListPopBack(plist);
	ListNode* pos = ListFind(plist, 3);
	if (pos)
	{
		pos->data *= 10;
	}
	else
	{
		printf("√ª’“µΩ\n");
	}
	ListInsert(pos, 300);
	ListPrint(plist);

	ListDestroy(plist);
}

int main()
{
	TestList2();
	return 0;
}