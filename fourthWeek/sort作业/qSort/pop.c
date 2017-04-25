#include "head.h"

Status pop(SqStack *S,int *e)
{
    if(S->top == -1)
    {
        printf("There are no data\n");
        return ERROR;
    }
    *e = S->data[S->top];
    S->top--;
    return OK;
}
