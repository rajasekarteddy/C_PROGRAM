#include <stdio.h>
#include <stdlib.h>
#define size 10
int array[size] = {10, 50, 1, 40, 30, 200, 10, 60, 70, 3};

int ascendingorder(const void *a,const void *b)
{
    return(*(int *)a -*(int *)b );
}

int desendingorder(const void *a,const void *b)
{
    return(*(int *)b -*(int *)a );
}

int main() 
{
qsort(array,size,sizeof(int),ascendingorder);
for(int i=0;i<size;i++)
{
printf("%d,",array[i]);
    
}   
printf("\r\n");
qsort(array,size,sizeof(int),desendingorder);
for(int i=0;i<size;i++)
{
printf("%d,",array[i]);
    
}
 
}

