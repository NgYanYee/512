#include"head.h"
int stackLength(LinkStack *S)
{
     LinkStackPtr p;
     int i=0;
     p=S->top;

     while(p)
     {
         p=p->next;
         i++;
     }

     return i;
}
