#include"head.h"

Status initStack(LinkStack *S)
{
    //S->top=(LinkStackPtr)malloc(sizeof(StackNode));
   // if(!S->top)
    //{
    //    printf("Fail!\n");
   //     return ERROR;
   // }
   // S->count=0;
   S->top=NULL;
   S->count=0;
    return OK;

}
