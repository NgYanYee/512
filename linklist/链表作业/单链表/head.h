#include<stdio.h>
#include<stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
}Node, *ptr_Node;
typedef enum Status
{
    SUCCESS, ERROR
}Status;

ptr_Node create(int *arr, int n);
void destroy(ptr_Node head);
Status insert(ptr_Node *head, ptr_Node node, int index);
Status delet(ptr_Node *head,int index,int *data);
int search(ptr_Node head, int data);
Status edit(ptr_Node head, int index, int *data);
void print(ptr_Node head);
