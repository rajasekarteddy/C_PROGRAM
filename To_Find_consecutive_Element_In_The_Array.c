#include <stdio.h>
#include<stdlib.h>

int a[]={2,3,4,5,6,6,8,9,2,2,2,2,3,4,5,6,7,8,8,8,8,8};
int n=sizeof(a)/sizeof(a[0]);
int value=0;
int main()
{
    
    for(int i=0;i<n-1;i++)
    {
    
        if(a[i]==a[i+1])
        {
             int count = 1;
       
        

        while(i+1<n && a[i]==a[i+1])
        {
            count++;
            i++;
        }
        
        printf("%d,%d\r\n",a[i],count);
        }
    }
}