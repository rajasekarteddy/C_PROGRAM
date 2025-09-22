#include<stdio.h>
#include<stdlib.h>
#define extract(n,k,l) (n>>k)&(1<<l)-1
//#define extract(n, k, l) (((n) >> (k)) & ((1U << (l)) - 1))

int main()
{
    
    int n=0xfff;
    int k=4;
    int l=6;
    int c=extract(n,k,l);
    
    printf("%d,%b,%d,%b",c,c,n,n);
    
    
}


