#include "queue.h"

int main()
{
    Queue Q;
    int e,data,gn;
    InitQueue(&Q);//��ʼ������
    do
    {
        printf("Please choose the gn you want\n");//ѡ����Ҫ�Ĺ���
        printf("1.enqueue\n2.dequeue\n3.gethead\n4.isempty\n5.isfull\n6.length\n7.traverse\n8.clear\n0.exit\n");
        scanf("%d",&gn);
        switch(gn)
        {
       case 1:
            {
                printf("please enter data\n");
                scanf("%d",&data);
                if(EnQueue(&Q, &data)==TRUE)//��Ӳ���
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
                if(DeQueue(&Q)==FALSE)//���Ӳ���
                    printf("There are no data\n");
                else
                    {
                    printf("success\n");
                    TraverseQueue(&Q, print);
                    }

            }break;
        case 3:{
                if((GetHeadQueue(&Q,&e)==TRUE))//��ȡfront
                    printf("head=%d\n",e);
                else
                    printf("There are no data\n");
                }break;
        case 4:{
                if(IsEmptyQueue(&Q)==TRUE)
                    printf("empty\n");
                else
                    printf("not empty\n");
                }break;
        case 5:{
                if(IsFullQueue(&Q)==TRUE)
                    printf("full\n");
                else
                    printf("not full\n");
                }break;
        case 6:
            {
            printf("length=%d\n",LengthQueue(&Q));

            }break;
        case 7:
            {
                TraverseQueue(&Q, print);
            }break;
        case 8:{ClearQueue(&Q);
            printf("queue was cleaned\n");
        }break;
        case 0:exit(0);break;
        default:
            {
                printf("choose 0-8\n");//����������ֲ��ڷ�Χ��
            }break;
        }
    }while(1);
    return 0;






}
