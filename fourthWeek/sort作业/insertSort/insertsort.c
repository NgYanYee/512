#include "head.h"
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
