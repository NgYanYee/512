#include"head.h"

void main()
{
  int *arr,index,len,gn,data,i;//len�ǳ��ȣ�gn�ǹ���
  ptr_TNode node,head,p,q;
  head=(ptr_TNode)malloc(sizeof(TNode)); 
  p=q=head;
  printf("���������鳤��\n");
  scanf("%d",&len);
  printf("����������\n");
  arr=(int*)malloc(sizeof(int)*len);
  for(i=0;i<len;i++)
  {
	  scanf("%d",arr+i);
	  p->data=*(arr+i);
	  q->next=p;
	  p->pre=q;
	  q=p;
	  p=(ptr_TNode)malloc(sizeof(TNode));
  }
  q->next=NULL;
  print( head);
  do
  {
	  printf("��������Ҫʵ�ֵĹ���\n");
	  printf("1������\n2��ɾ��\n");
	  scanf("%d",&gn);
	  switch(gn)
	  {
	   case 1:{
				node=(ptr_TNode)malloc(sizeof(TNode));
		        printf("���������λ��\n�Լ���������\n");
		        scanf("%d,%d",&index,&node->data);
			    if(insert_T(&head,node,index)==ERROR)
					printf("����ʧ��\n");
				else
					printf("����ɹ�\n");
			    print(head);
			   }break;
	   case 2:{
		        printf("��ȷ��ɾ����λ��\n");
			    scanf("%d",&index);
			    
				if(delete_T(&head,index,&data)==ERROR)
					printf("ɾ��ʧ��\n");
				else 
					printf("ɾ���ɹ�\n");
				print(head);
			   }break;
	   default:break;
	  }
  }while(1);
}