#include "queue.h"

Status TraverseQueue(const Queue *Q, int (*foo)(int *q))
{
    Node* p;
    p=Q->front;
    if((Q->front==Q->rear)&&(Q->front==NULL))
    {
        printf("empty\n");
        return FALSE;
    }

    while(p!=Q->rear)
    {
       foo(&(p->data));
       p=p->next;
    }
    if(p=Q->rear)
    {
        foo(&(p->data));
    }
    printf("\n");
}
