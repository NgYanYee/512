#include "queue.h"
void ClearQueue(Queue *Q)
{
    Node *p,*q;
    Node *head;
    if(IsEmptyQueue(Q)==FALSE)
    {
        head=Q->front;
       p=Q->front->next;
        while(p!=head)
        {
            q=p;
            p=p->next;
            free(q);
            Q->count--;
        }
        Q->rear=head;//现在Q->rear和Q->front都指向第一个节点
    }

}
