#include "head.h"
Status push(LinkStack *S,int e)
{
    LinkStackPtr p=(LinkStackPtr)malloc(sizeof(StackNode));
    p->data=e;
    p->next=S->top;//�ѵ�ǰ��ջ��Ԫ�ظ�ֵ���½ڵ��ֱ�Ӻ��
    S->top=p;
    S->count++;
    return OK;
}
