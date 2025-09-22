#include <stdio.h>
#include<stdlib.h>
int n=18;

int main()
{
    int *ptr=(int *)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        ptr[i]=i*10+1;
        printf("%d,",
printf("\r\n");ptr[i]);
    }

int *newptr=(int *)realloc(ptr,30*sizeof(int));
ptr=newptr;
    for(int i=0;i<30;i++)
    {
        ptr[i]=i*10+1;
        printf("f:%d,",ptr[i]);
    }
}