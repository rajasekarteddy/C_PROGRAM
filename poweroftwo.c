//power of two

#include <stdio.h>
int poweroftwo(int x)
{
    return(x>0)&&(x&(x-1))==0;
    
}
int main()
{
poweroftwo(16)?printf("powerof2"):printf("it is not a power of 2");

}