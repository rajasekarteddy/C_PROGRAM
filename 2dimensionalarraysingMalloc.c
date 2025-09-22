#include<stdio.h>
#include<stdlib.h>


//int array[2][3]={{1,2,3},{4,5,6}};
int main()
{
    int (*ptr)[3]=malloc(2*sizeof(*ptr));
    
    for(int i=0;i<2;i++)
    {
        for(int j=0;j<3;j++)
        {
           ptr[i][j]=i+2*5;
           printf("%d,",ptr[i][j]);
        }
    }
    
    
}


