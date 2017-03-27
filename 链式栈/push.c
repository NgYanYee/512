#include "head.h"
Status push(LinkStack *S,int e)
{
    LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));
    p->data=e;
    p->next=S->top;//把当前的栈顶元素赋值给新节点的直接后继
    S->top=p;
    S->count++;
    return OK;
}
