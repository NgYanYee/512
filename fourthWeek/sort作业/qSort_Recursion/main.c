#include "head.h"

void main()
{
    int *arr,len,i;
    printf("���������鳤��\n");
    scanf("%d",&len);
    arr=(int*)malloc(sizeof(int)*len);
    text(arr,len);
    printf("ԭ����Ϊ:\n");
    for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n����������Ϊ:\n");
    quicksort(arr,0,len-1);
    for(i=0;i<len;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    getch();
}
