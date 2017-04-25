#include "head.h"
void text(int *arr,int len)
{
    FILE *fp=fopen("../dataData/text.data","r");
    int i=0;
    while(i<len)
    {
        fscanf(fp,"%d",&arr[i]);
        i++;
    }
    fclose(fp);

}

void insertsort(int *arr,int len)
{
    int i,j,temp;
    for(i=1;i<len;i++)
    {
        temp=*(arr+i);
        j=i-1;
        while(temp<=*(arr+j)&&j>=0)
        {
            *(arr+j+1)=*(arr+j);
            j--;
        }
        if(j==-1)
        {
            *(arr+0)=temp;
        }
        else if(temp>*(arr+j))
        {
            *(arr+j+1)=temp;
        }

    }
}

void inserSort(int len)
{
    int i=0,*arr,*temp;
    clock_t startTime,endTime;
    double timeCha;
    arr=(int*)malloc(sizeof(int)*len);
    temp=(int *)malloc(sizeof(int)*len);
    text(arr,len);
    startTime=clock();
    insertsort(arr,len);
    endTime=clock();
    timeCha=(double)(endTime-startTime)/CLOCKS_PER_SEC;
    printf("insertSort use time:%lfs\n",timeCha);
}
