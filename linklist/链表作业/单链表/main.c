#include"head.h"

void main()
{
  int *arr,index,len,gn,data,i;//len是长度，gn是功能
  ptr_Node node,head;
  printf("请输入数组长度\n");
  scanf("%d",&len);
  printf("请输入数组\n");
  arr=(int*)malloc(sizeof(int)*len);
  for(i=0;i<len;i++)
  {
	  scanf("%d",arr+i);
  }
  head=(ptr_Node)malloc(sizeof(Node));
  head=create(arr, len);
 
  do
  {
	  printf("请输入想要实现的功能\n");
	  printf("1、销毁\n2、插入\n3、删除\n4、查找\n5、修改\n");
	  scanf("%d",&gn);
	  switch(gn)
	  {
	   case 1:destroy(head); break;
	   case 2:{
                node=(ptr_Node)malloc(sizeof(Node));
		        printf("请输入插入位置\n以及插入数据\n");
		        scanf("%d,%d",&index,&node->data);
			    if(insert(&head,node,index)==ERROR)
					printf("插入失败\n");
				else
					printf("插入成功\n");
			    print(head);
			   }break;
	   case 3:{
		        printf("请确定删除的位置\n");
			    scanf("%d",&index);
			    
				if(delet(&head,index,&data)==ERROR)
					printf("删除失败\n");
				else 
					printf("删除成功\n");
				print(head);
			   }break;
	   case 4:{
		        printf("请确定查找的数据\n");
			    scanf("%d",&data);
				printf("%d\n",search(head, data));
			   }break;
	   case  5:{
		        printf("请确定修改的位置\n以及数据\n");
				scanf("%d,%d",&index,&data);
				if(edit(head,index,&data)==ERROR)
					printf("修改失败\n");
				else
					printf("修改成功\n");
				print(head);
			   }break;
		default:break;
	  }
 }while(1);
 }