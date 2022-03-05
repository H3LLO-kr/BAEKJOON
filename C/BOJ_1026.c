#include <stdio.h>

void    sort_a(int *arr, int n)
{
    int i;
    int j;

    i = n;
    while (i >= 0)
    {
        j = 0;
        while (j < i)
        {
            if (arr[j] > arr[j + 1])
            {
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
            j++;
        }
        i--;
    }
}

int main()
{
    int N;
    int A[50];
    int B[50];
    int check[50] = { 0 ,};
    int sum;

    scanf("%d", &N);

    for(int i = 0; i < N; i++)
        scanf("%d", &A[i]);
    for(int i = 0; i < N; i++)
        scanf("%d", &B[i]);

    sort_a(A, N);

    sum = 0;
    for(int i = 0; i < N; i++)
    {
        int max = -1;
        int max_index;
        for(int j = 0; j < N; j++)
        {
            if (B[j] > max && check[j] != 1)
            {
                max = B[j];
                max_index = j;
            }
        }
        check[max_index] = 1;
        sum += A[i] * B[max_index];
    }
    printf("%d", sum);
}