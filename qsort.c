#include <stdio.h>
#include <stdlib.h>

int cmp(const void *a, const void *b);
int removeDuplicates(int *A, int N, int *out);
int solution(int A[], int N);
int main() 
{
   // int A[] = {2, 5, 3, 2, 4, 1};
    int A[] = {2, 9, 7, 4, 3, 2,1,8,9,10,4,3,2};
    int N = sizeof(A) / sizeof(A[0]);

    int result = solution(A, N);
    printf("Length of longest spike: %d\n", result);

    return 0;
}

int cmp(const void *a, const void *b)
{
    return (*(int*)a - *(int*)b);
}


int removeDuplicates(int *A, int N, int *out)
{
    qsort(A, N, sizeof(int), cmp);
    int j = 0;
    for (int i = 0; i < N; i++)
    {
        if (i == 0 || A[i] != A[i - 1])
        {
            out[j++] = A[i];
        }
    }
    return j;
}


int solution(int A[], int N)
{
    if (N == 0) return 0;

    int *uniq = (int*)malloc(sizeof(int) * N);
    if (uniq == NULL) 
    {
        printf("Memory allocation failed.\n");
        return -1;
    }

    int size = removeDuplicates(A, N, uniq);

    if (size == 1) 
    {
        free(uniq);
        return 1;
    }

    int max_spike = 1;

    for (int i = 1; i < size - 1; i++) 
    {
        int inc = i;                  // strictly increasing elements
        int dec = size - i - 1;       // strictly decreasing elements
        int len = 1 + (inc < dec ? inc : dec) * 2;  // symmetric spike
        if (len > max_spike)
            max_spike = len;
    }

    free(uniq);
    return max_spike;
}


