#include "head.h"
void text3(int *arr,int len)
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

void mergesort (int *arr,int first,int last,int *temp)
{
    if(first<last)
    {
        int mid=(last+first)/2;
        mergesort(arr,first,mid,temp);
        mergesort(arr,mid+1,last,temp);
        mergearray(arr,first,mid,last,temp);
    }
}

void mergearray (int *arr,int first,int mid,int last,int *temp)
{
    int i=first,j=mid+1,k=0;
    int m=mid,n=last;
    while((i<=m)&&(j<=n))
    {
        if(*(arr+i)<*(arr+j))
        {
            *(temp+k)=*(arr+i);
            i++,k++;
        }

        else
        {
            *(temp+k)=*(arr+j);
            k++,j++;
        }
    }
    while(i<=m)
    {
       *(temp+k)=*(arr+i);
       k++;i++;
    }
    while(j<=n)
    {
        *(temp+k)=*(arr+j);
        k++;j++;
    }
    for(i=0;i<k;i++)
    {
        *(arr+first+i)=*(temp+i);
    }





}


void mergeSort(int len)
{
    int i=0,*arr,*temp;
    clock_t startTime,endTime;
    double timeCha;
    arr=(int*)malloc(sizeof(int)*len);
    temp=(int *)malloc(sizeof(int)*len);
    text(arr,len);
    startTime=clock();
    mergesort(arr,0,len-1,temp);
    endTime=clock();
    timeCha=(double)(endTime-startTime)/CLOCKS_PER_SEC;
    printf("mergeSort use time:%lfs\n",timeCha);
}
