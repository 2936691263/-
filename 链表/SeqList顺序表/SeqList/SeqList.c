#include"seqlist.h"

void SeqListInit(SL*ps)
{
	ps->a = NULL;
	ps->size = 0;
	ps->capacity = 0;
}

void check(SL*ps)
{
	if (ps->size == ps->capacity)
	{
		SQDateType* tmp;
		int newcapacity = ps->capacity == 0 ? 4 : ps->capacity * 2;
		tmp = (SQDateType*)realloc(ps->a, newcapacity* sizeof(SQDateType));
		if (tmp == NULL)
		{
			printf("realloc fail\n");
			exit(-1);
		}
		else
		{
			ps->a = tmp;
			ps->capacity = newcapacity;
		}
	}
}

void SeqListPushBack(SL*ps, SQDateType x)
{
	check(ps);
	ps->a[ps->size] = x;
	ps->size++;
}

void SeqListPushFront(SL*ps, SQDateType x)
{
	check(ps);
	int end = ps->size - 1;
	while (end >= 0)
	{
		ps->a[end + 1] = ps->a[end];
		--end;
	}
	ps->a[0] = x;
}

void SeqListPopBack(SL*ps, SQDateType x);
void SeqListPopFront(SL*ps, SQDateType x);

void SeqListPrint(SL*ps)
{
	for (int i = 0; i <= ps->size; ++i)
	{
		printf("%d ", ps->a[i]);
	}
	printf("\n");
}