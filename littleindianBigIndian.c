#include<stdio.h>
#include<stdlib.h>
int x=1;
int main()
{
    char *ptr=(char *)&x;   
    if(*ptr)
    {
        printf("little indian");
    }
    else
    {
        printf("bigindian");
    }
         
}