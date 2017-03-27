#include "head.h"
void print(LinkStack *S)
{
    int i=S->count;
    LinkStackPtr p;
    for(p=S->top;i>0;i--)
        {
            printf("%d ",p->data);
            p=p->next;
        }
        printf("\n");
}
