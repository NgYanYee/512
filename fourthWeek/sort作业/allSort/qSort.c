#include "head.h"



Status initStack(SqStack *S)
{
    S->data=(ElemType*)(malloc(sizeof(ElemType)*MaxSize));
    if(NULL==S->data)
        return ERROR;
    S->top = -1;
    return OK;
}


int partition(int* arr,int left,int right)
{
    int i,j,temp;
    i=left,j=right;
    temp=arr[i];
    while(i<j)
    {
        while(arr[j]>=temp&&j>i)
        {
            j--;
        }
        arr[i]=arr[j];
        while(arr[i]<=temp&&i<j)
        {
            i++;
        }
        arr[j]=arr[i];
    }
    arr[i]=temp;
    return i;
}


Status pop(SqStack *S,int *e)
{
    if(S->top == -1)
    {
        printf("There are no data\n");
        return ERROR;
    }
    *e = S->data[S->top];
    S->top--;
    return OK;
}



Status push(SqStack *S,int e)
{
    if(S->top == MaxSize-1)
        return ERROR;
    S->top++;
    S->data[S->top] = e;
    return OK;
}


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

void text2(int *arr,int len)
{

    FILE *fp=fopen("../dataData/text.data","r");
    int i=0;
    while(i<len)
    {
        fscanf(fp,"%d",&arr[i]);
        i++;
    }
    fclose(fp);

}

void qSort(int len)
{
    SqStack *S=(SqStack*)malloc(sizeof(SqStack));
    int *arr,i;
    clock_t startTime,endTime;
    double timeCha;
    arr=(int*)malloc(sizeof(int)*len);
    MaxSize=len;
    text(arr,len);
    startTime=clock();
    sort(arr,len,S);
    endTime=clock();
    timeCha=(double)(endTime-startTime)/CLOCKS_PER_SEC;
    printf("qsort use time:%lfs\n",timeCha);
}
