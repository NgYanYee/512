#include "head.h"

int partition(int* arr,int left,int right)
{
    int i,j,temp;
    i=left,j=right;
    temp=arr[i];
    while(i<j)
    {
        while(arr[j]>=temp&&j>i)
        {
            j--;
        }
        arr[i]=arr[j];
        while(arr[i]<=temp&&i<j)
        {
            i++;
        }
        arr[j]=arr[i];
    }
    arr[i]=temp;
    return i;
}
