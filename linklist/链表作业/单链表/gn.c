#include "head.h"
ptr_Node create(int *arr, int n)//根据数组生成一条链表，成功则返回头节点，失败返回 NULL
{
	int i;
	ptr_Node p,q,head;
	head=(ptr_Node)malloc(sizeof(Node));
	p=q=head;
	for(i=0;i<n;i++)//将数组一个一个输入链表
  	{
		p->data=*(arr+i);
		q->next=p;
		q=p;
 		p=(ptr_Node)malloc(sizeof(Node));
  		
    }
	q->next=NULL;
	return head;

}


void destroy(ptr_Node head)//销毁给定的链表
{
  ptr_Node p,q;
  p=head->next;
  while(p)//当p不等于NULL
  {
	q=p->next;
	free(p);
	p=q;
  }
  head->next=NULL;
}



Status insert(ptr_Node *head, ptr_Node node, int index)//在第 index 位后面插入 node 结点
{
 ptr_Node prev,temp;
 int i;
 if(!(*head))return ERROR;
 if(index==0)//插入头指针前面
  {
    node->next=(*head);
	(*head)=node;
   }
 else
  { temp=(*head);
    for(i=1;i<index&&temp!=NULL;i++)//找到index位
		temp=temp->next;
	if(temp==NULL) return ERROR;
	prev=temp;//令prev等于index位的结构体
    temp=prev->next;
	node->next=temp;
	prev->next=node;
	
 }
 temp=(*head);//检验是否成功，
 for(i=0;i<index;i++)
      temp=temp->next;
 if(temp==node) //插入成功返回 SUCCESS，失败返回 ERROR
     return SUCCESS;
 else
	 return ERROR;
}

Status delet(ptr_Node *head,int index,int *data)//删除第 index 位节点后面的节点，将删除的结点的值保存到（*data）中
{
 int i,j;
 ptr_Node temp,prev;
 temp=(*head);
 if(!(*head))return ERROR;
 if(index==0)//将删除头节点
  {
   (*head)=temp->next;
   free(temp);//释放节点
   return SUCCESS;
 }
 
 else
  {
   for(i=1;i<index&&temp!=NULL;i++)//先找到index位置，再删掉index位后的数据
     temp=temp->next;
	if(temp==NULL) return ERROR;
   prev=temp;
   j=(*data);
   temp=temp->next;
   (*data)=temp->data;
	prev->next=temp->next;//完成操作
	free(temp);
   
   for(i=1,temp=(*head);i<=index;i++)
	   temp=temp->next;
   //tempkenengshinull ruguo temp shi null name meiyou data tajiuhui baocuo zhejiu haole
   if(temp==NULL||temp->data!=j) //检验，删除成功返回 SUCCESS，其他情况返回 ERROR
	   return SUCCESS;
  
   else
	   return ERROR;
 }
}

int search(ptr_Node head, int data)//在链表中查找节点值与 data 相等的节点，并返回找到的第一个节点的前一个节点的位置
//（例：头节点相等，返回 0），没找到或者其他情况返回-1
{
  ptr_Node temp;
  int index=0;
  temp=head;
  while(temp!=NULL)//当temp没有到链表结尾
   { 
	 if(temp->data==data)
		 break;
     temp=temp->next;
     index+=1;
   }
  if (temp!=NULL)
	return index;
  else
	return (-1);
}

Status edit(ptr_Node head, int index, int *data)//将链表中 index 位点后面的结点的值修改为(*data)，将原值保存到(*data) //修改成功返回 SUCCESS，其他情况返回 ERROR
{
  ptr_Node temp;
  int i,j;
  j=*data;
  temp=head;
  if(index==0)
  {
	  *data=head->data;
	  head->data=j;
  }
  for(i=0;i<index&&temp!=NULL;i++)
  {
	  temp=temp->next;
  }
  if(temp==NULL)
	  return ERROR;
  *data=temp->data;
  temp->data=j;
  for(i=0,temp=head;i<index;i++)
	  temp=temp->next;
  if(temp->data==j)
	  return SUCCESS;
  else
	  return ERROR;
}



void print(ptr_Node head)
{

	int i;
	ptr_Node p=head;
	for(i=0;p!=NULL;i++)
	{
		printf("%5d",p->data);
		p=p->next;
	}
	printf("\n");
}