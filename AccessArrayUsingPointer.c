#include<stdlib.h>
#define row 2
#define col 3
int array[row][col]={{1,2,3},{4,5,6}};

int main()
{
    int (*ptr)[3]=array;
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
           // ptr[i][j]=23;
            printf("%d,",ptr[i][j]);
        }
        
    }