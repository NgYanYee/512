#include "head.h"
void insertsort(int *arr,int len2)
{
    int i,j,temp;
    for(i=1; i<len2; i++)
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

void insertSort(int len1,int len2)
{
    int i=0,*arr,*temp;
    clock_t startTime,endTime;

    double timeCha;
    arr=(int*)malloc(sizeof(int)*len2);
    temp=(int *)malloc(sizeof(int)*len2);
    startTime=clock();
    freopen("text.data","r",stdin);

    while(scanf("%d",&arr[0])!=EOF)
    {
        for(i=1; i<len2; i++)
        {
            scanf("%d",&arr[i]);
        }

        insertsort(arr,len2);

    }
    fclose(stdin);

    endTime=clock();
    timeCha=(double)(endTime-startTime)/CLOCKS_PER_SEC;
    printf("insertSort use time:%lfs\n",timeCha);

}

