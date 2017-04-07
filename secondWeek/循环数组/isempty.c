#include"queue.h"
Status IsEmptyQueue(const Queue *Q)
{
    if(Q->front==Q->rear)
    {
        return TRUE;
    }

    else
        {
            return FALSE;
        }
}
