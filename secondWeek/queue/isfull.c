#include "queue.h"
Status IsFullQueue(const Queue *Q)
{
    if(Q->rear==NULL||Q->front==NULL) {
        return FALSE;
    }
    if(Q->rear->next==Q->front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
