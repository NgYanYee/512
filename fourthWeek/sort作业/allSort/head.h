#include<stdio.h>
#include<stdlib.h>
#include<time.h>

typedef int ElemType;
int MaxSize;//zuidarongliang
//¶¨ÒåÕ»½á¹¹Ìå
typedef struct
{
    ElemType* data;
    int top;
} SqStack;
typedef enum Status
{
    OK, ERROR
} Status;

Status initStack(SqStack *S);
int partition(int* arr,int left,int right);
Status pop(SqStack *S,int *e);
Status push(SqStack *S,int e);
void sort(int *arr,int len,SqStack *S);
void text2(int *arr,int len);
void qSort(int len);

void quicksort(int *arr,int first,int last);
void text1(int *arr,int len);
void qSort1(int len);

void insertsort(int *arr,int len);
void text(int *arr,int len);
void inserSort(int len);

void mergearray (int *arr,int first,int mid,int last,int *temp);
void mergesort (int *arr,int first,int last,int *temp);
void text3(int *arr,int len);
void mergeSort(int len);
