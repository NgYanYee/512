#include "head.h"

Status push(SqStack *S,int e)
{
    if(S->top == MaxSize-1)
        return ERROR;
    S->top++;
    S->data[S->top] = e;
    return OK;
}
