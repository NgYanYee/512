#include "head.h"
ptr_Node create(int *arr, int n)//������������һ�������ɹ��򷵻�ͷ�ڵ㣬ʧ�ܷ��� NULL
{
	int i;
	ptr_Node p,q,head;
	head=(ptr_Node)malloc(sizeof(Node));
	p=q=head;
	for(i=0;i<n;i++)//������һ��һ����������
  	{
		p->data=*(arr+i);
		q->next=p;
		q=p;
 		p=(ptr_Node)malloc(sizeof(Node));
  		
    }
	q->next=NULL;
	return head;

}


void destroy(ptr_Node head)//���ٸ���������
{
  ptr_Node p,q;
  p=head->next;
  while(p)//��p������NULL
  {
	q=p->next;
	free(p);
	p=q;
  }
  head->next=NULL;
}



Status insert(ptr_Node *head, ptr_Node node, int index)//�ڵ� index λ������� node ���
{
 ptr_Node prev,temp;
 int i;
 if(!(*head))return ERROR;
 if(index==0)//����ͷָ��ǰ��
  {
    node->next=(*head);
	(*head)=node;
   }
 else
  { temp=(*head);
    for(i=1;i<index&&temp!=NULL;i++)//�ҵ�indexλ
		temp=temp->next;
	if(temp==NULL) return ERROR;
	prev=temp;//��prev����indexλ�Ľṹ��
    temp=prev->next;
	node->next=temp;
	prev->next=node;
	
 }
 temp=(*head);//�����Ƿ�ɹ���
 for(i=0;i<index;i++)
      temp=temp->next;
 if(temp==node) //����ɹ����� SUCCESS��ʧ�ܷ��� ERROR
     return SUCCESS;
 else
	 return ERROR;
}

Status delet(ptr_Node *head,int index,int *data)//ɾ���� index λ�ڵ����Ľڵ㣬��ɾ���Ľ���ֵ���浽��*data����
{
 int i,j;
 ptr_Node temp,prev;
 temp=(*head);
 if(!(*head))return ERROR;
 if(index==0)//��ɾ��ͷ�ڵ�
  {
   (*head)=temp->next;
   free(temp);//�ͷŽڵ�
   return SUCCESS;
 }
 
 else
  {
   for(i=1;i<index&&temp!=NULL;i++)//���ҵ�indexλ�ã���ɾ��indexλ�������
     temp=temp->next;
	if(temp==NULL) return ERROR;
   prev=temp;
   j=(*data);
   temp=temp->next;
   (*data)=temp->data;
	prev->next=temp->next;//��ɲ���
	free(temp);
   
   for(i=1,temp=(*head);i<=index;i++)
	   temp=temp->next;
   //tempkenengshinull ruguo temp shi null name meiyou data tajiuhui baocuo zhejiu haole
   if(temp==NULL||temp->data!=j) //���飬ɾ���ɹ����� SUCCESS������������� ERROR
	   return SUCCESS;
  
   else
	   return ERROR;
 }
}

int search(ptr_Node head, int data)//�������в��ҽڵ�ֵ�� data ��ȵĽڵ㣬�������ҵ��ĵ�һ���ڵ��ǰһ���ڵ��λ��
//������ͷ�ڵ���ȣ����� 0����û�ҵ����������������-1
{
  ptr_Node temp;
  int index=0;
  temp=head;
  while(temp!=NULL)//��tempû�е������β
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

Status edit(ptr_Node head, int index, int *data)//�������� index λ�����Ľ���ֵ�޸�Ϊ(*data)����ԭֵ���浽(*data) //�޸ĳɹ����� SUCCESS������������� ERROR
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