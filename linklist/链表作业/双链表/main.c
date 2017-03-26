#include"head.h"

void main()
{
  int *arr,index,len,gn,data,i;//len是长度，gn是功能
  ptr_TNode node,head,p,q;
  head=(ptr_TNode)malloc(sizeof(TNode)); 
  p=q=head;
  printf("请输入数组长度\n");
  scanf("%d",&len);
  printf("请输入数组\n");
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
	  printf("请输入想要实现的功能\n");
	  printf("1、插入\n2、删除\n");
	  scanf("%d",&gn);
	  switch(gn)
	  {
	   case 1:{
				node=(ptr_TNode)malloc(sizeof(TNode));
		        printf("请输入插入位置\n以及插入数据\n");
		        scanf("%d,%d",&index,&node->data);
			    if(insert_T(&head,node,index)==ERROR)
					printf("插入失败\n");
				else
					printf("插入成功\n");
			    print(head);
			   }break;
	   case 2:{
		        printf("请确定删除的位置\n");
			    scanf("%d",&index);
			    
				if(delete_T(&head,index,&data)==ERROR)
					printf("删除失败\n");
				else 
					printf("删除成功\n");
				print(head);
			   }break;
	   default:break;
	  }
  }while(1);
}