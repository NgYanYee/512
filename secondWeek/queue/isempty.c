#include "queue.h"
Status IsEmptyQueue(const Queue *Q)
{
    if((Q->front==NULL)||(Q->rear==NULL))
       {
            return TRUE;
       }
    else
       {
            return FALSE;
       }
}
