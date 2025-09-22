//binary to integer conversion
#include <stdio.h>
int x=11111111;
int decimal;
int base =1;
int binarytointeger(int n)
{
    while(n>0)
    {
        int lastdigit=n%10;
        decimal=decimal+(lastdigit*base);
        base=base *2;
        n=n/10; //remove last digit
        
    }
    return decimal;
    
}

int main()
{
  int y= binarytointeger(x);
  printf("%d",y);
}