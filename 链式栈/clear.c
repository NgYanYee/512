#include"head.h"

Status clearStack(LinkStack *S)
{
    LinkStackPtr p;
    if(isEmptyStack(&S)==TRUE)
        return ERROR;
    p=S->top;
    while(p)
    {
        S->top=S->top->next;
        free(p);
        p=S->top;
    }
    if(isEmptyStack(&S)==TRUE)
        return OK;

}
