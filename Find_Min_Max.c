//to find min and max number in an array using pointer 

#include <stdio.h>
#define size 10
int array[size]={10,20,30,400,50,60,700,80,90,1};
void ToFindMinMax(int a[],int *min,int *max,int *second,int s)
{
    *min=a[0];*max=a[0];*second=a[0];
    
    for(int i=0;i<s;i++)
    {
        if(a[i]>*max)
        {
            *second=*max;
            *max=a[i];
        }else if(a[i]>*second && a[i]!=*max)
        {
            *second=a[i];
            
        }
        
           if(a[i]<*min)
        {
            
            *min=a[i];
        }
        
    }
    
    
    
}
int main()
{
  int a,b,c;
ToFindMinMax(array,&a,&b,&c,size);
printf("%d,%d,%d",a,b,c);

}