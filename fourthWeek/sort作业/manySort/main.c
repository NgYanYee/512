#include "head.h"
int main()
{
   int len1,len2,gn;
   printf("����������ĸ�����\n");
   scanf("%d",&len1);
   printf("����������ĳ��ȣ�\n");
   scanf("%d",&len2);
   text(len1,len2);
   insertSort(len1,len2);
   qSort(len1,len2);
   getch();
}
