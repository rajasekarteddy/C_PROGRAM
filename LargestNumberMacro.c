#include<stdio.h>
#define MAX(X,Y,Z) ((X>Y && X>Z)?X:(Y>X && Y>Z)?Y:Z)
int main()
{
    int a=100;int b=193; int c=256;
    
    int g=MAX(a,b,c);
    
    printf("%d",g);
    
}