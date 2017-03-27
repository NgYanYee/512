#include"head.h"
Status destroyStack(LinkStack *S)
{
    LinkStackPtr p;
    if(isEmptyStack(&S))
        return ERROR;
    p=S->top;
    while(p)
    {
        S->top=S->top->next;
        free(p);
        p=S->top;
    }
    free(S->top);
    return OK;
}
