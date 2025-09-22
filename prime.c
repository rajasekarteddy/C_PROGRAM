#include<stdio.h>

int primenumber(int n)
{
    if(n<=1)
    {
        return 0;
    }
    else
    {
        for(int i=2;i*i<=n;i++)
        {
            if(n%i==0)
            {
                return 0;
                break;
            }
            
        }
        return 1;
        
    }
    
    
}

int main()
{
    
   int c= primenumber(2);
   printf("%d",c);
    
}

