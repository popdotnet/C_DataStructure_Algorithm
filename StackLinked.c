
#include <stdio.h>
#include <stdlib.h>
#include "StackLinked.h"

void Create(Stack *ps)
{
	ps->size = 0;
	ps->Top = NULL;
}

void Push(StackEntry e, Stack *ps)
{
	StackNode *pns = (StackNode *)malloc(sizeof(StackNode));
	pns->entry = e;
	pns->next = ps->Top;
	ps->Top = pns;
	ps->size++;
}

void Pop(StackEntry *pe, Stack *ps)
{
	StackNode *psn;
	*pe = ps->Top->entry;
	psn = ps->Top;
	ps->Top = ps->Top->next;
	free(psn);
	ps->size--;
}

int StackEmpty(Stack *ps)
{
	return ps->Top == NULL;
}

int StackFull(Stack *ps)
{
	return 0;
}

int StackSize(Stack *ps)
{
	return ps->size;
}

void ClearStack(Stack *ps)
{
	StackNode *pTop = ps->Top;
	while (pTop)
	{
		pTop = pTop->next;
		free(ps->Top);
		ps->Top = pTop;
	}
}

void TraverseStack(Stack *ps, void (*fp)(StackEntry))
{
	StackNode *psn = ps->Top;
	while (psn)
	{
		(*fp)(psn->entry);
		psn = psn->next;
	}
}
