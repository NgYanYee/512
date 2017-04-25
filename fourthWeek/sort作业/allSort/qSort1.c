#include "head.h"

void quicksort(int *arr,int first,int last)
{
    if(first<last)
    {
        int i,j,k,temp;
        i=first,j=last,k=*(arr+first);
        while(i<j)
        {
            while(i<j&&*(arr+j)>=k)
            {
                j--;
            }
            while(i<j&&*(arr+i)<=k)
            {
                i++;
            }
            if(i<j)
            {
                temp=*(arr+j);
                *(arr+j)=*(arr+i);
                *(arr+i)=temp;
            }

        }
        *(arr+first)=*(arr+i);
        *(arr+i)=k;
        quicksort(arr,first,i-1);
        quicksort(arr,i+1,last);
    }

}


void text1(int *arr,int len)
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



void qSort1(int len)
{
    int *arr,i;
    clock_t startTime,endTime;
    double timeCha;
    arr=(int*)malloc(sizeof(int)*len);
    text(arr,len);
    startTime=clock();
    quicksort(arr,0,len-1);
    endTime=clock();
    timeCha=(double)(endTime-startTime)/CLOCKS_PER_SEC;
    printf("qsort_recurison use time:%lfs\n",timeCha);
}

