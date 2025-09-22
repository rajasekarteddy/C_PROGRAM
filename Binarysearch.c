// find the position of the given value in the array 
//binary search
#include<stdlib.h>
#include<stdio.h>
#define size 10
int array[size]={100,90,80,70,60,50,40,30,20,10};

//50 less than target 

int binarysearch(int a[],int left,int right,int target)
{
      while(left <right)
  {
  int mid =left+(right- left)/2; //9-3=6/2=3 
  
// printf("%d,",mid);

      if(a[mid]==target)
      {
          return mid;
      }
      else if(a[mid]>target)
      {
        left=mid-1;
        //  printf("left:%d\r\n,",left);
      }

      else 
      {
          right=mid+1;
        //   printf("right:%d\r\n,",right);
      }
      
      
      
  }
  

  
  
  
}

int main()
{
    int X=40;
   int c=binarysearch(array,0,size-1,X);
    printf("%d",c);
    
}
