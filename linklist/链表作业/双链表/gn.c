#include"head.h"

Status delete_T(ptr_TNode *head, int index, int *data)//双向链表,删除第 index 位节点后面的节点，将删除的结点的值保存到（*data）中 
{
	ptr_TNode temp,p;
	int i;
	temp=*head;
	if((*head)==0)
		return ERROR;
	if(index==0)//删除头节点
	{
		*head=temp->next;
		free(temp);
		return SUCCESS;
	}
	 for(i=1;i<=index&&temp!=NULL;i++)//找到index的位置
	 {
		 temp=temp->next; 	 
	 }
	 if(temp==NULL) return ERROR;//若超出链表尾，则返回ERROR
	 *data=temp->data;//把数据保存在data中
	 p=temp;
	 temp->next->pre=temp->pre;
	 temp->pre->next=temp->next;
	 free(temp);//删除节点
	 
	 
	 for(i=1,temp=*head;i<=index&&temp!=NULL;i++)//验证
		 temp=temp->next;
	 if(temp!=p||temp==NULL)
		 return SUCCESS;
	 else
		 return ERROR;


}


 
Status insert_T(ptr_TNode *head, ptr_TNode node, int index)//双向链表,在第 index 位后面插入 node 结点 
{
	ptr_TNode temp,prev;
	int i;
	temp=*head;
	if(index==0)//node插入head之前
	{
		node->next=temp;
		temp->pre=node;
		*head=node;
		return SUCCESS;
	}
	for(i=1;i<index&&temp!=NULL;i++)
	{
		temp=temp->next;
		
	}
	if(temp==NULL)
		return ERROR;
	if(temp->next==NULL)//若node插入最后一个节点后面
		{
			temp->next=node;
			node->pre=temp;
			node->next=NULL;
			return SUCCESS;
		}
	prev=temp;
	temp=temp->next;//令node插入prev和temp之间
	node->pre=prev;
	prev->next=node;
	node->next=temp;
	temp->pre=node;
    for(i=1,temp=(*head)->next;i<index;i++)
	{
		temp=temp->next;
	}
	if(temp==node)//检验插入成功返回 SUCCESS，失败返回 ERROR
		return SUCCESS;
	else
		return ERROR;
}

void print(ptr_TNode head)//输出函数，二次检验
{

	int i;
	ptr_TNode p=head;
	for(i=0;p!=NULL;i++)
	{
		printf("%5d",p->data);
		p=p->next;
	}
	printf("\n");
}