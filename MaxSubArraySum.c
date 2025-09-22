//kadance algorithm
#include<stdio.h>
#include<stdlib.h>
    int nums[] = {-2, 1, -3, 14, -1, 2, 1, -5, 8};
int size = sizeof(nums) / sizeof(nums[0]);
int start=0;
int end =0;
int i,j;
int main()
{
   int max_sum=nums[0];
    
    for( i=0;i<size;i++)
    {
           int current_sum = 0; 
        //   printf("%d\r\n,",current_sum);
        for( j=i;j<size;j++)
        {
            current_sum=current_sum+nums[j];

printf("%d\r\n,",current_sum);
        }
        
        if(current_sum>max_sum)
        {
            max_sum =current_sum;
            start=i;
            end=j;
            
        }
        
        
        

        
    }
    
    printf("max number:%d\r\n",max_sum);
    
    printf("s:::%d,%d,\r\n",start,end);
    for(int i=start;i<end;i++)
{    
    printf("%d,",nums[i]);
    
}
printf("\r\n");
}