#include "head.h"
Status pop(LinkStack *S,int *e)
{
    LinkStackPtr p;
    if(isEmptyStack(S)==TRUE)//isEmptyStack(LinkStack *S)
        return ERROR;
    *e=S->top->data;
    p=S->top;//��ջ������p
    S->top=S->top=S->top->next;//ջ������һλ
    free(p);
    S->count--;
    return OK;
}
