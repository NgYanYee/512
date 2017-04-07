#include "queue.h"

void main()
{
    Queue Q;
    int e,data,gn;
    int (*foo)(int);
    InitQueue(&Q);
    do
    {
        printf("Please choose the gn you want\n");
        printf("1.enqueue\n2.dequeue\n3.destroy\n4.gethead\n5.isempty\n6.isfull\n7.length\n8.traverse\n9.clear\n0.exit\n");
        scanf("%d",&gn);
        switch(gn)
        {
        case 1:
            {
                printf("please enter data\n");
                scanf("%d",&data);
                if(EnQueue(&Q, &data)==TRUE)//你知道自己哪里错了吗？
                   {
                    printf("success\n");
                    TraverseQueue(&Q, print);
                   }
                else
                   {
                    printf("fail\n");
                    }

            }break;
        case 2:
            {
                if(DeQueue(&Q)==FALSE)
                    printf("There are no data\n");
                else
                    {
                    printf("success\n");
                    TraverseQueue(&Q, print);
                    }

            }break;
        case 3:DestoryQueue(&Q);break;
        case 4:{
                if((GetHeadQueue(&Q,&e)==TRUE))
                    printf("head=%d\n",e);
                else
                    printf("There are no data\n");
                }break;
        case 5:{
                if(IsEmptyQueue(&Q)==TRUE)
                    printf("empty\n");
                else
                    printf("not empty\n");
                }break;
        case 6:{
                if(IsFullQueue(&Q)==TRUE)
                    printf("full\n");
                else
                    printf("not full\n");
                }break;
        case 7:
            {
            printf("length=%d\n",LengthQueue(&Q));

            }break;
        case 8:
            {
                TraverseQueue(&Q, print);
            }break;
        case 9:{
                ClearQueue(&Q);
                printf("queue was cleaned\n");
                }break;
        case 0:exit(0);break;
        default:
            {
                printf("choose 0-9\n");
            }break;
        }
    }while(1);







}
