// Online C compiler to run C program online
#include <stdio.h>
int array[]={21,35,67,89,3,2,1,56,45};

void bubblesort(int a[],int s)
{
    for(int i=0;i<s-1;i++)
    {
        
        for(int j=0;j<s-i-1;j++)
        {
            
            if(a[j]<a[j+1])
            {
                int temp= a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
                
            }
        }
        
    }
    
    
}
int main() 

{
  
 int size =sizeof(array)/sizeof(int);
 bubblesort(array,size);
 for(int k=0;k<size;k++)
 {
     printf("%d,",array[k]);
 }

 
}