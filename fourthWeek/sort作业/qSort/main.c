#include "head.h"

void main()
{

    SqStack *S=(SqStack*)malloc(sizeof(SqStack));
    int *arr,len,i;
    printf("���������鳤��:\n");
    scanf("%d",&len);
    arr=(int*)malloc(sizeof(int)*len);
    MaxSize=len;
    text(arr,len);
    printf("ԭ����Ϊ��\n");
    for(i=0; i<len; i++)
    {
        printf("%d ",arr[i]);
    }
    sort(arr,len,S);
    printf("\n����������Ϊ:\n");
    for(i=0; i<len; i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    getch();
}
