#include "queue.h"
void DestoryQueue(Queue *Q)
{
    if(Q->data)
        free(Q->data);
    Q->data=NULL;
    Q->front=Q->rear=0;
}
