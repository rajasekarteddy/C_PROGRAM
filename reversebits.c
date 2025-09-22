
#include <stdio.h>

    int reverse=0;

int reversebits(int n)
{

   while(n>0)
   {
 
    reverse=reverse<<1;
   reverse=reverse|(n&1);
  printf("r:%b\r\n",reverse);
    n=n>>1;
    printf("%b\r\n",n);
   }
    return reverse;
}
int main()
{
int N=0b10111011;
  int c=reversebits(N);
  printf("%b,%d",c,c);
    return 0;
}