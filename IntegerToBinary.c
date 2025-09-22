//integer to binary conversion

#include <stdio.h>
int IntegerToBinary(int n)
{
    for(int i=31;i>=0;i--)
    {
        int c=(n>>i)&1;
printf("%d",c);        
    }
    
    
    
}
int main()
{
    int N=10;
 IntegerToBinary(N);
    


}