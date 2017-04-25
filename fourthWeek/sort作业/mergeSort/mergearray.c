#include "head.h"
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
