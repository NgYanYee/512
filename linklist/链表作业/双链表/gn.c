#include"head.h"

Status delete_T(ptr_TNode *head, int index, int *data)//˫������,ɾ���� index λ�ڵ����Ľڵ㣬��ɾ���Ľ���ֵ���浽��*data���� 
{
	ptr_TNode temp,p;
	int i;
	temp=*head;
	if((*head)==0)
		return ERROR;
	if(index==0)//ɾ��ͷ�ڵ�
	{
		*head=temp->next;
		free(temp);
		return SUCCESS;
	}
	 for(i=1;i<=index&&temp!=NULL;i++)//�ҵ�index��λ��
	 {
		 temp=temp->next; 	 
	 }
	 if(temp==NULL) return ERROR;//����������β���򷵻�ERROR
	 *data=temp->data;//�����ݱ�����data��
	 p=temp;
	 temp->next->pre=temp->pre;
	 temp->pre->next=temp->next;
	 free(temp);//ɾ���ڵ�
	 
	 
	 for(i=1,temp=*head;i<=index&&temp!=NULL;i++)//��֤
		 temp=temp->next;
	 if(temp!=p||temp==NULL)
		 return SUCCESS;
	 else
		 return ERROR;


}


 
Status insert_T(ptr_TNode *head, ptr_TNode node, int index)//˫������,�ڵ� index λ������� node ��� 
{
	ptr_TNode temp,prev;
	int i;
	temp=*head;
	if(index==0)//node����head֮ǰ
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
	if(temp->next==NULL)//��node�������һ���ڵ����
		{
			temp->next=node;
			node->pre=temp;
			node->next=NULL;
			return SUCCESS;
		}
	prev=temp;
	temp=temp->next;//��node����prev��temp֮��
	node->pre=prev;
	prev->next=node;
	node->next=temp;
	temp->pre=node;
    for(i=1,temp=(*head)->next;i<index;i++)
	{
		temp=temp->next;
	}
	if(temp==node)//�������ɹ����� SUCCESS��ʧ�ܷ��� ERROR
		return SUCCESS;
	else
		return ERROR;
}

void print(ptr_TNode head)//������������μ���
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