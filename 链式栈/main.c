#include "head.h"

void main()
{
    int i,gn,e,len;
    LinkStack S;
    if(initStack(&S)==OK)
    {
        printf("enter the length:\n");
        scanf("%d",&len);
        for(i=0; i<len; i++)
        {
            printf("enter data:\n");
            scanf("%d",&e);
            push(&S,e);

        }
    }
    print(&S);

    do
    {
        printf("Please choose what you want to do:\n");
        printf("1、isEmpty\n2、getTop\n3、clear\n4、destroy\n5、stackLength\n6、Push\n7、Pop\n");
        scanf("%d",&gn);
        switch(gn)
        {
        case 1:
        {
            if(isEmptyStack(&S)==TRUE)
                printf("Stack is empty\n");
            else
                printf("Stack is not empty\n");
        }
        break;
        case 2:
        {
            if(getTop(&S,&e)==OK)
                printf("S->top=%d\n",e);
            else
                printf("can't find S->top\n");
        }
        break;
        case 3:
        {
            if(clearStack(&S))
                printf("clear ERROR\n");
            else
                printf("clear OK\n");
        }
        break;
        case 4:
        {
            if(destroyStack(&S))
                printf("destroy ERROR\n");
            else
                printf("destroy OK\n");
        }
        break;
        case 5:
        {
            printf("stack length:%d\n",stackLength(&S));
        }
        break;
        case 6:
        {
            printf("enter data that you want to push:\n ");
            scanf("%d",&e);
            push(&S,e);
            print(&S);
        }
        break;
        case 7:
        {
            if(ERROR==pop(&S,&e))
            {
                printf("now there is a empty stack\n");
            }
            else
            {
                printf("the number on the top:%d\n",e);
                printf("numbers in stack :");
                print(&S);
            }
        }
        default: {
         printf("choose 1~7 \n");
         }
            break;

        }




    }
    while(1);
}


