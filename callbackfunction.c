
#include <stdio.h>
int appu =10;
void(*callback)(int,int)=NULL; //declaring the function
// void Register_callback(void(*cb)(int,int))
// {
//     callback=cb;
// }

void ISR_INTERUPT(void(*cb)(int,int))
{
    callback=cb;
    if(callback!=NULL)
    {
        callback(10,20);
    }
    else
    {
        printf("no call back"); 
    }
    
    
}

void LED(int a,int b)
{
    int LED =!LED;
    if(LED)
    {
        int c=a+b;
        printf(" %d:LED ON\r\n",c);
        
    }
    else
    {
        printf("LED OFF\r\n");
    }
    
    
}

int main()
{
 // Register_callback(LED);
  for(int i=0;i<3;i++)
  {
      
  ISR_INTERUPT(LED);
  }


}