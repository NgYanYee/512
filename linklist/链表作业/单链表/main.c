#include"head.h"

void main()
{
  int *arr,index,len,gn,data,i;//len�ǳ��ȣ�gn�ǹ���
  ptr_Node node,head;
  printf("���������鳤��\n");
  scanf("%d",&len);
  printf("����������\n");
  arr=(int*)malloc(sizeof(int)*len);
  for(i=0;i<len;i++)
  {
	  scanf("%d",arr+i);
  }
  head=(ptr_Node)malloc(sizeof(Node));
  head=create(arr, len);
 
  do
  {
	  printf("��������Ҫʵ�ֵĹ���\n");
	  printf("1������\n2������\n3��ɾ��\n4������\n5���޸�\n");
	  scanf("%d",&gn);
	  switch(gn)
	  {
	   case 1:destroy(head); break;
	   case 2:{
                node=(ptr_Node)malloc(sizeof(Node));
		        printf("���������λ��\n�Լ���������\n");
		        scanf("%d,%d",&index,&node->data);
			    if(insert(&head,node,index)==ERROR)
					printf("����ʧ��\n");
				else
					printf("����ɹ�\n");
			    print(head);
			   }break;
	   case 3:{
		        printf("��ȷ��ɾ����λ��\n");
			    scanf("%d",&index);
			    
				if(delet(&head,index,&data)==ERROR)
					printf("ɾ��ʧ��\n");
				else 
					printf("ɾ���ɹ�\n");
				print(head);
			   }break;
	   case 4:{
		        printf("��ȷ�����ҵ�����\n");
			    scanf("%d",&data);
				printf("%d\n",search(head, data));
			   }break;
	   case  5:{
		        printf("��ȷ���޸ĵ�λ��\n�Լ�����\n");
				scanf("%d,%d",&index,&data);
				if(edit(head,index,&data)==ERROR)
					printf("�޸�ʧ��\n");
				else
					printf("�޸ĳɹ�\n");
				print(head);
			   }break;
		default:break;
	  }
 }while(1);
 }