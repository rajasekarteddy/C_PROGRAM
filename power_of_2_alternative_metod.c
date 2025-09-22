#include <stdio.h>

int isPowerOfTwo(unsigned int n) {
    if (n == 0) return 0;  // 0 is not a power of 2

    while (n % 2 == 0) 
    { 
        printf("appu \r\n");// keep dividing by 2
        n = n / 2;
        printf("n:%d\r\n ",n);
    }

    return (n == 1);  // if reduced to 1, it's a power of 2
}

int main() {
    unsigned int num;

    printf("Enter a number: ");
    scanf("%u", &num);

    if (isPowerOfTwo(num)) {
        printf("%u is a power of 2\n", num);
    } else {
        printf("%u is NOT a power of 2\n", num);
    }

    return 0;
}
