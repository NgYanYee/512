#include "head.h"

void main()
{
    int *arr,len,i;
    printf("请输入数组长度\n");
    scanf("%d",&len);
    arr=(int*)malloc(sizeof(int)*len);
    text(arr,len);
    printf("原数组为:\n");
    for(i=0;i<len;i++) {
        printf("%d ",arr[i]);
    }
    printf("\n排序后的数组为:\n");
    quicksort(arr,0,len-1);
    for(i=0;i<len;i++)
    {
        printf("%d ",*(arr+i));
    }
    printf("\n");
    getch();
}
