#include "head.h"
void main()
{
    int i=0,len,*arr,*temp;
    printf("���������鳤��:\n");
    scanf("%d",&len);
    arr=(int*)malloc(sizeof(int)*len);
    temp=(int *)malloc(sizeof(int)*len);
    text(arr,len);
    printf("ԭ����Ϊ:\n");
    for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n����������Ϊ:\n");
    insertsort(arr,len);
    for(i=0;i<len;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    getch();
}
