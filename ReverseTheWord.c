//string reverse 
#include<stdio.h>
#include<stdlib.h>
char appu[]="beast is inside me";
void reverse(char a[],int start,int end)
{
    
    while(start<end)
    {
        char temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    
    
}
void reverseword(char a[])
{
       int j=0; int i=0;
    while(appu[j]!='\0')
    {
        j++;
    }
    reverse(appu,0,j-1);
    
    while(a[i]!='\0')
    {
        while(a[i]==' ')
        {
            i++;
        }
        j=i;
        while(a[j]!='\0' && a[j]!=' ')
        {
            j++;
        }
         reverse(appu,i,j-1);
         i=j;
        
    }
    
}


int main()
{
 reverseword(appu);
    printf("%s",appu);
      
}




