#include "queue.h"

void DestoryQueue(Queue *Q)
{
     Node* p;
     p=Q->front;
     while(p!=Q->rear)
     {
         Q->front=Q->front->next;
         free(p);
         p=Q->front;
         Q->count--;
     }
     if(p==Q->rear)
        free(p);
    Q->front=Q->rear=NULL;
}
