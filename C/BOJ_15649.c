#include <stdio.h>

int n; int m;
int check_arr[10000];

int recursive_f(int i, int index, int *arr){
    if (index == m){
        for (int j = 0; j < m; j++){
            printf("%d", arr[j]);
            if (j < m - 1)
                printf(" ");
        }
        printf("\n");
        return 0;
    }
    for (int j = i; j <= n; j++){
        arr[index] = j;
        recursive_f(j, index + 1, arr);
        arr[index] = 0;
    }
}

int main(void)
{
    int arr[10000] = { 0, };

    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; i++){
        arr[0] = i;
        recursive_f(i, 1, arr);
        arr[0] = 0;
    }
}