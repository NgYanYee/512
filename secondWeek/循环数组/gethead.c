#include"queue.h"
Status GetHeadQueue(Queue *Q, int *e)
{
    if(Q->rear==Q->front)
        return FALSE;
    *e=Q->data[Q->front];//��ͷԪ�ص�ֵ����e
        return TRUE;

}
