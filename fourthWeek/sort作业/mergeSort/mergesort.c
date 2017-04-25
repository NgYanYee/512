#include "head.h"
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
