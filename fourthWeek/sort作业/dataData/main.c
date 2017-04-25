#include <stdio.h>
#include <stdlib.h>

void text()
{
    int i=0;
    int len=200000;
    srand((unsigned)time(NULL));
    FILE *fp=fopen("text.data","w");
    while(i<len) {
        fprintf(fp,"%d ",rand());
       i++;
    }
    fclose(fp);
}

int main()
{
    text();
    getch();
}
