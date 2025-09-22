#include <stdio.h>
#include<stdlib.h>
//function pointer
int add(int a, int b)
{
    return a+b;
}
int sub(int a, int b)
{
    return a-b;
}
int main()
{
    
int (*ptr[])(int,int)={add,sub};

int c=ptr[1](10,30);
printf("%d",c);
}