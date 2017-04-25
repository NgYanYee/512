#include "head.h"

void main()
{
    int i=0,len,*arr,*temp;
    printf("请输入数组长度\n");
    scanf("%d",&len);
    arr=(int*)malloc(sizeof(int)*len);
    temp=(int *)malloc(sizeof(int)*len);
    printf("原数组为:\n");
    text(arr,len);
    for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n排序后的数组为:\n");
    mergesort(arr,0,len-1,temp);
    for(i=0;i<len;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    getch();
}
