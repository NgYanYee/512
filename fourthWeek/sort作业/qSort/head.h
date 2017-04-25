#include<stdio.h>
#include<stdlib.h>
#include<time.h>
typedef int ElemType;
int MaxSize;//zuidarongliang
//定义栈结构体
typedef struct
{
    ElemType* data;
    int top;
} SqStack;
typedef enum Status
{
    OK, ERROR
}Status;

Status initStack(SqStack *S);
int partition(int* arr,int left,int right);
Status pop(SqStack *S,int *e);
Status push(SqStack *S,int e);
void sort(int *arr,int len,SqStack *S);
void text(int *arr,int len);
