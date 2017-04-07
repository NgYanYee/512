#include "queue.h"
Status DeQueue(Queue *Q)
{
    if(Q->front==Q->rear)
        return FALSE;
    Q->front=(Q->front+1)%MAXQUEUE;
    return TRUE;
}
