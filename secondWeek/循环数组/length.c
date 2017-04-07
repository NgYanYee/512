#include "queue.h"
int LengthQueue(Queue *Q)
{
    return((Q->rear-Q->front+MAXQUEUE)%MAXQUEUE);
}
