

#ifndef StackLinked_h
#define StackLinked_h

typedef struct stackentry
{
    char *str;
} StackEntry;

typedef struct stacknode
{
    StackEntry entry;
    struct stacknode *next;
} StackNode;

typedef struct stack
{
    int size;
    StackNode *Top;
} Stack;

void Create(Stack *ps);

void Push(StackEntry e, Stack *ps);
void Pop(StackEntry *pe, Stack *ps);
int StackEmpty(Stack *ps);
int StackFull(Stack *ps);
int StackSize(Stack *ps);
void ClearStack(Stack *ps);
void TraverseStack(Stack *ps, void (*fp)(StackEntry));

#endif /* STACKLINKED_H_ */
