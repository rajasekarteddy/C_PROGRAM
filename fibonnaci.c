//fibonnaci series 
//factorial of a number using recursion 
#include<stdio.h>
#include<stdlib.h>
    int n; int c;
int fibbonaci(int x)
{
    if(x==0)
    {
     return 0;
    }
    else if(x==1)
    {
        return 1;
    }
    else
    {
    
    return fibbonaci(x-1)+fibbonaci(x-2);
    
}
}
int main()
{


  printf("enter the number\r\n");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
       c=fibbonaci(i);
     printf("%d,",c);
 }
     
}

