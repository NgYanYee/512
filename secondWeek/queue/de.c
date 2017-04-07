#include "queue.h"

Status DeQueue(Queue *Q)
{
    Node* p;
    if((Q->rear==NULL)||(Q->front==NULL))
        return FALSE;
    if(Q->front==Q->rear)
    {
        Q->front=NULL;
        return FALSE;
    }
    else
    {
        p=Q->front;
        Q->front=Q->front->next;
        return TRUE;
    }
}
