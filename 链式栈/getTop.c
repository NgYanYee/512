#include"head.h"

Status getTop(LinkStack *S,int *e)
{
    if(isEmptyStack(&S)==TRUE)
        return ERROR;
    else
        *e=S->top->data;
    return OK;

}
