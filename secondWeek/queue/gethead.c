#include "queue.h"
Status GetHeadQueue(Queue *Q, int *e)
{
    if((Q->front==NULL)&&(Q->rear==NULL))
        return FALSE;
    else
    {
        *e=Q->front->data;
        return TRUE;
    }

}
