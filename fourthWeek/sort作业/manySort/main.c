#include "head.h"
int main()
{
   int len1,len2,gn;
   printf("请输入数组的个数：\n");
   scanf("%d",&len1);
   printf("请输入数组的长度：\n");
   scanf("%d",&len2);
   text(len1,len2);
   insertSort(len1,len2);
   qSort(len1,len2);
   getch();
}
