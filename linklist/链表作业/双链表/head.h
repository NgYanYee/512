#include<stdio.h>
#include<stdlib.h>
typedef struct TNode 
{
    int data;
    struct TNode *next;
    struct TNode *pre; 
}TNode, *ptr_TNode;
typedef enum Status
{
    SUCCESS, ERROR
}Status;

Status delete_T(ptr_TNode *head, int index, int *data);
Status insert_T(ptr_TNode *head, ptr_TNode node, int index);
void print(ptr_TNode head);