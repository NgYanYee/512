#include"queue.h"
Status EnQueue(Queue *Q, int *data)
{

    if((Q->rear+1)%MAXQUEUE==Q->front)
        return FALSE;
    Q->data[Q->rear+1]=(int*)malloc(sizeof(int));
    Q->data[Q->rear]=*data;
    Q->rear=(Q->rear+1)%MAXQUEUE;
    return TRUE;

}
