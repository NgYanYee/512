#include "head.h"

Status initStack(SqStack *S)
{
    S->data=(ElemType*)(malloc(sizeof(ElemType)*MaxSize));
    if(NULL==S->data)
        return ERROR;
    S->top = -1;
    return OK;
}
