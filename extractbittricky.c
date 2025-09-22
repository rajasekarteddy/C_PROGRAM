/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define extract(n,k,l) (n>>k)&((1<<l)-1)
int x=0b11010101;
int main()
{
  int c=extract(x,3,7);
  
  printf("%b,%d",c,c);
    return 0;
}