//factorial of a number 

#include<stdio.h>
#include<stdlib.h>

int factorial(int y)
{
    
    if(y==0)
    return 0;
    else if(y==1)
     return 1;
     else {
         
         
         return y*factorial(y-1);
     }
}
int main()
    {
        
     int fact=3;
     int x=factorial(fact);
     printf("%d",x);
        
    }