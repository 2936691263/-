#include"List.h"

ListNode* BuySListNode(LTDataType x)
{
	ListNode* newnode = (ListNode*)malloc(sizeof(ListNode));
	newnode->data = x;
	newnode->next = NULL;
	newnode->prev = NULL;
	return newnode;
}

ListNode* ListInit()
{
	ListNode* phead = BuySListNode(0);
	phead->next = phead;
	phead->prev = phead;
	return phead;
}

void ListPrint(ListNode* phead)
{
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		printf("%d ", cur->data);
		cur = cur->next;
	}
	printf("\n");
}

void ListDestroy(ListNode* phead)
{

}

void ListPushBack(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* tail = phead->prev;
	ListNode* newnode = BuySListNode(x);
	tail->next = newnode;
	newnode->prev = tail;	
	phead->prev = newnode;
	newnode->next = phead;
}

void ListPushFront(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* first = phead->next;
	ListNode* newnode = BuySListNode(x);
	phead->next = newnode;
	newnode->prev = phead;
	newnode->next = first;
	first->prev = newnode;
}//first有效防止连接前节点，后面节点地址丢失

void ListPopBack(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* tail = phead->prev;
	ListNode* prev = tail->prev;
	prev->next = phead;
	phead->prev = prev;
	free(tail);
	tail = NULL;
}

void ListPopFront(ListNode* phead)
{
	assert(phead);
	assert(phead->next != phead);
	ListNode* first = phead->next;
	ListNode* second = first->next;
	phead->next = second;
	second->prev = phead;
	free(first);
	first = NULL;
}

ListNode* ListFind(ListNode* phead, LTDataType x)
{
	assert(phead);
	ListNode* cur = phead->next;
	while (cur != phead)
	{
		if (cur->data == x)
		{
			return cur;
		}
		cur = cur->next;
	}
	return NULL;
}

void ListInsert(ListNode* pos, LTDataType x)
{
	assert(pos);
	ListNode* newnode = BuySListNode(x);
	ListNode* prev = pos->prev;
	prev->next = newnode;
	newnode->prev = prev;
	newnode->next = pos;
	pos->prev = newnode;
}

void ListErase(ListNode* pos)
{

}