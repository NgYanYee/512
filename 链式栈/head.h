#include<stdio.h>
#include <stdlib.h>
//��ʽ�ṹ
typedef  struct StackNode
{
	int data;
	struct StackNode *next;
}StackNode, *LinkStackPtr;

typedef  struct  LinkStack{
	LinkStackPtr 	 top;	  //ջ��ָ��
	int		 count;  //ջ��Ԫ�ظ���
}LinkStack;

typedef enum Status
{
    OK, ERROR
}Status;

typedef enum Boolean
{
    TRUE, FALSE
}Boolean;

Status clearStack(LinkStack *S);
Status destroyStack(LinkStack *S);
Status getTop(LinkStack *S,int *e);
Boolean isEmptyStack(LinkStack *S);
Status pop(LinkStack *S,int *e);
void print(LinkStack *S);
Status push(LinkStack *S,int e);
int stackLength(LinkStack *S);
Status initStack(LinkStack *S);
