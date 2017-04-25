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




void qSort(int len1,int len2)
{
    int *arr,i=0,j;
    clock_t startTime,endTime;
    double timeCha;
    startTime=clock();
     freopen("text.data","r",stdin);
         arr=(int*)malloc(sizeof(int)*len2);
    while(i<len1)
    {

        for(j=0; j<len2; j++)
        {
            scanf("%d",&arr[j]);
        }
        quicksort(arr,0,len2-1);

        i++;

    }
     fclose(stdin);
    endTime=clock();
    timeCha=(double)(endTime-startTime)/CLOCKS_PER_SEC;
    printf("qsort use time:%lfs\n",timeCha);
}
