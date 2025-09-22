
//Missing Element in an array 
#include <stdio.h>
#define size 10
int array[size]={1,2,3,4,5,6,7,9,10};
int total;
void missingelement(int *appu,int s)
{
    
    int expectedResult=s*(s+1)/2;
    printf("%d,",expectedResult);
    
    for(int i=0;i<s;i++)
    {
        total +=appu[i];
        
    }
    
    int result =expectedResult-total;
    printf("%d,",result);
    
}

int main()
{
    missingelement(array,size);
  
}