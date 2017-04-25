#include "head.h"

void sort(int *arr,int len,SqStack *S)
{
    int left,right,i;
    initStack(S);//��ʼ��ջ
    push(S,0);
    push(S,len-1);//��ʼ���������������
    while(S->top>-1)
    {
        pop(S,&right);
        pop(S,&left);//ջ��Ԫ�س�ջ
        if(right<=left)
            continue;
        i=partition(arr,left,right);
        if(i>1)
        {
            push(S,left);
            push(S,i-1);//��벿����ջ
        }
        if(i+1<len-1)
        {
            push(S,i+1);
            push(S,right);//�Ұ벿����ջ
        }
    }



}
