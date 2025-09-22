#include <stdio.h>

int main() {
    // --- Example 1: char *ptr ---
    char str[] = "Hi";
    char *ptr = str;

    printf("=== char *ptr Example ===\n");
    printf("ptr (address)   : %p\n", (void*)ptr);
    printf("*ptr (character): %c\n", *ptr);
    printf("*(ptr+1)       : %c\n\n", *(ptr+1));

    // --- Example 2: char **ptr ---
    char *words[] = {"Hi", "Bye"};
    char **pptr = words;

    printf("=== char **ptr Example ===\n");
    printf("pptr (address)   : %p\n", (void*)pptr);
    printf("*pptr (char*)    : %p -> %s\n", (void*)*pptr, *pptr);
    printf("**pptr (char)    : %c\n", **pptr);
    printf("*(pptr+1) (char*): %p -> %s\n", *(pptr+1), *(pptr+1));
    printf("**(pptr+1) (char): %c\n", **(pptr+1));

    return 0;
}
