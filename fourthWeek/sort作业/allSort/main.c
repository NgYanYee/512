#include "head.h"
void main()
{
    int gn;
    int len;
    printf("请输入数组长度");
    scanf("%d",&len);
    qSort(len);
    qSort1(len);
    inserSort(len);
    mergeSort(len);
    getch();
}
