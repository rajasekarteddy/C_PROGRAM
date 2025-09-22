#include <stdio.h>
#include <string.h>

int main() {
    char str[100]="appa";
    int i, len, isPalindrome = 1;


    len = strlen(str);
printf("length:%d\r\n",len);
    for (i = 0; i < len / 2; i++)
    {
        printf("i:%d ,%d\r\n",i);
        printf("string %d,%d\r\n,",i,len-i-1);
    
        if (str[i] != str[len - 1 - i])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
