#include "queue.h"
int LengthQueue(Queue *Q)
{
     int i=1;
     Node* p;
     if((Q->front==NULL)&&(Q->rear==NULL))
        return 0;
     else if(Q->front==Q->rear)
        return 1;
     else
     {
         p=Q->front;
         while(p!=Q->rear)
         {
            p=p->next;
            i++;
         }
     Q->count=i;
     return i;
     }


}
