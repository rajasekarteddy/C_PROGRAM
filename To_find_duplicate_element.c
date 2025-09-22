#include <stdio.h>
#include<stdlib.h>

int a[]={2,3,4,5,6,7,8,9,2,2,2,2,3,4,5,6,7,8,8,8,8,8};
int n=sizeof(a)/sizeof(a[0]);
int main()
{
    for(int i=0;i<n;i++)
    {
        
     int count=0;
     int already_count=0;
     for(int j=0;j<i;j++)
     {
         if(a[i]==a[j])
         {
             already_count=1;
             break;
         }
         
     }
     
     if(!already_count)
     {
         for(int k=0;k<n;k++)
         {
             
             if(a[i]==a[k])
             {
                 count++;
             }
             
         }
         
       printf("%d,count:%d\r\n",a[i],count);  
     }
     
    }

}