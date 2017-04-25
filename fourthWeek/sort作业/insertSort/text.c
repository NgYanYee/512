#include "head.h"
void text(int *arr,int len)
{
    int i=0;
    FILE *fp=fopen("../dataData/text.data","r");
    while(i<len)
    {

        fscanf(fp,"%d",&arr[i]);
        i++;
    }
    fclose(fp);

}
