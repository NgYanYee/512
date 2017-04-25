#include"head.h"
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

