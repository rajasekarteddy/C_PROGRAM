/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
// const int ptr:
// const int *ptr;  //    
//  int * const ptr;
//  int const * a const;

// Here “ptr” is a pointer to a const integer, the value of the integer is not modifiable, but the pointer is not modifiable.
// Here “ptr” is a constant pointer to an integer which means that the value of the pointed integer is changeable, but the pointer is not modifiable.
// Here “a” is a const pointer to a const integer which means the value of the pointed integer and pointer both cannot be changed.
#include <stdio.h>
 int value=10;
 int value2=40;
//const int *ptr2=&value; //value cannot change  //address can change 
//int * const ptr; //value can change // address cannot  change 
//const int *const ptr; //value cannot cange // address cannot chnge 

int main()
{
ptr2=&value2;
 //  *ptr2=300;
    
  //  ptr=&value2;
    printf("%d,%p,%p,%p,%d,",value,&value,&ptr2,ptr2,*ptr2);
    
}