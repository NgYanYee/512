#include"queue.h"
Status GetHeadQueue(Queue *Q, int *e)
{
    if(Q->rear==Q->front)
        return FALSE;
    *e=Q->data[Q->front];//讲头元素的值赋给e
        return TRUE;

}
