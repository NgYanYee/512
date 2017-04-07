#include"queue.h"
Status IsFullQueue(const Queue *Q)
{
    if((Q->rear+1)%MAXQUEUE==Q->front)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}
