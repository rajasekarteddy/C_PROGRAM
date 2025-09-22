
#include <stdio.h>

int shift_code(int input1,int input2)
{
    int count=0;
    for(int i=31;i>=0;i--)
    {
        int c=(input1>>i)&1;
      
       int d=(input2>>i)&1;
        
          printf("%b\r\n",c);
        if(c!=d)
        {
            count++;
            
        }
    }
    return count;
    
}


int main()
{
int d= shift_code(2,15);
printf("%d\r\n",d);

}

