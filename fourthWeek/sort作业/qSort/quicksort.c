#include "head.h"

void sort(int *arr,int len,SqStack *S)
{
    int left,right,i;
    initStack(S);//初始化栈
    push(S,0);
    push(S,len-1);//初始化最左和最右坐标
    while(S->top>-1)
    {
        pop(S,&right);
        pop(S,&left);//栈顶元素出栈
        if(right<=left)
            continue;
        i=partition(arr,left,right);
        if(i>1)
        {
            push(S,left);
            push(S,i-1);//左半部分入栈
        }
        if(i+1<len-1)
        {
            push(S,i+1);
            push(S,right);//右半部份入栈
        }
    }



}
