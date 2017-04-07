#include "queue.h"
Status TraverseQueue(const Queue *Q, int (*foo)(int *q))
{
    int p;
    p=Q->front;
    if((Q->front==0)&&(Q->rear==0))
       {
           return FALSE;
       }
    if(Q->rear>Q->front)
    {
        while(p<Q->rear)
        {
            foo(&Q->data[p]);//利用foo函数实现输出功能
            p++;
        }
        return TRUE;
    }
}
