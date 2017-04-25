#include "head.h"
void text(int len1,int len2)
{
    int i=0,j=0;
    srand((unsigned)time(NULL));
    FILE *fp=fopen("text.data","w");
    while(i<len1)//数组的组数
    {
        for(j=0;j<len2;j++){
             fprintf(fp,"%d ",rand());
        }
        fprintf(fp,"\n");
        i++;
    }
    fclose(fp);
}
