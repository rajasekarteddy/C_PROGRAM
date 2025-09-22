#include <stdio.h>

void sum(char a[])
{
    int appu = 0;
    int j = 0;

    // Find the length of the string
    while (a[j] != '\0')
    {
        j++;
    }

    // Sum the numeric values of characters
    for (int i = 0; i < j; i++)
    {
        appu += (a[i] - '0');
    }
    
  int   diviible =appu/3;

    printf("n: %d for a[0] = %c, a[1] = %c\n", appu, a[0], a[1]);
}

int main()
{
    char S[3] = "23";  // 2 characters + null terminator

    printf("Varying a[0] from 0 to 9 (a[1] = %c):\n", S[1]);
    for (char i = '0'; i <= '9'; i++)
    {
        S[0] = i;
        sum(S);
    }

    printf("\nVarying a[1] from 0 to 9 (a[0] = %c):\n", S[0]);
    S[0] = '2';  // Reset a[0] to constant value
    for (char i = '0'; i <= '9'; i++)
    {
        S[1] = i;
        sum(S);
    }

    return 0;
}
