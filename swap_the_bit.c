#include<stdio.h>
int x=10;  //8421 //1010  //1011
int i=1;
int j=2;
int main()
{
    int c=(x>>i)&1;  //0th bit 
    int d=(x>>j)&1;  // 3rd bit 
    printf("hh  %d,%d\r\n",c,d);
    printf("x:%d,%b\r\n",x,x);
if(c!=d)
{
    x=(x^(1<<i));     //
         printf("%d,%b\r\n",x,x);
        x=x^(1<<j);  //
          printf("v:%d,%b\r\n",x,x);
    }
    
}