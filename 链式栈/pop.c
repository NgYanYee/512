#include "head.h"
Status pop(LinkStack *S,int *e)
{
    LinkStackPtr p;
    if(isEmptyStack(S)==TRUE)//isEmptyStack(LinkStack *S)
        return ERROR;
    *e=S->top->data;
    p=S->top;//将栈顶赋给p
    S->top=S->top=S->top->next;//栈顶下移一位
    free(p);
    S->count--;
    return OK;
}
