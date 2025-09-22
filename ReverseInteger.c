//reverse the integer 
#include <stdio.h>
int a=123;
int decimal;
int reverseinteger(int n)
{
    
    while(n>0)
    {
        int lastdigit=n%10;
     decimal =decimal*10+lastdigit;

    n=n/10;
        
    }
    return decimal;
}


int main()
{
    int b=reverseinteger(a);
printf("%d",b);
}