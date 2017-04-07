#include "queue.h"

Status EnQueue(Queue *Q, int *data)
{
    if(Q->rear==NULL)
    {
        Node* head=(Node*)malloc(LEN);
        head->data=*data;
        Q->front=Q->rear=head;
        Q->front->next=Q->rear;
        Q->rear->next=Q->front;
        return TRUE;
    }
    else if(Q->rear->next!=Q->front)
    {
        if(Q->front==NULL)
        {
            Q->front=Q->rear;
            Q->front->data=*data;
            return TRUE;
        }
        Q->rear->next->data=*data;
        Q->rear=Q->rear->next;
        return TRUE;
    }
    else
        {
            Node* p=(Node*)malloc(LEN);
            if(!p)
            {
                printf("fail!\n");
                return FALSE;
            }

            p->data=*data;
            Q->rear->next=p;
            Q->rear=p;
            p->next=Q->front;
                return TRUE;

        }

}
