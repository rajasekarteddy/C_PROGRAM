#include<stdio.h>
#include<stdlib.h>
#define row 2
#define column 3
#define layers 2
int main()
{
    
    

   int (*ptr)[row][column]= malloc(layers*sizeof(*ptr));
   
   for(int i=0;i<layers;i++)
   {
       for(int j=0;j<row;j++)
       {
            for(int k=0;k<column;k++)
       {
           ptr[i][j][k]=5;
           printf("%d,",ptr[i][j][k]);
       }
   }
    
    
}

}





