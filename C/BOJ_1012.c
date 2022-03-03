#include <stdio.h>

int check(int arr[50][50], int x, int y, int j, int k){
    if (j < x - 1)
        if (arr[j + 1][k] == 1)
            return 1;
    if (k < y - 1)
        if (arr[j ][k + 1] == 1)
            return 1;
    return 0;
}

void function(){
        int x = 0;
        int y = 0;
        int count = 0;
        int ret = 0;
        int arr[50][50] = { 0 ,};
        scanf("%d %d %d", &x, &y, &count);
        for (int i = 0; i < x; i++)
            for (int j = 0; j < y; j++)
                arr[i][j] = 0;
        for (int j = 0; j < count; j++){
            int a;
            int b;
            scanf("%d %d", &a, &b);
            arr[a][b] = 1;
        }
        for (int i = 0; i < x; i++){
            for (int j = 0; j < y; j++){
                printf("%d ", arr[i][j]);
            }
            printf("\n");
        }
        for (int j = 0; j < x; j++)
            for (int k = 0; k < y; k++)
                if (arr[j][k] == 1 && !check(arr, x, y, j, k))
                    ret++;
        printf("%d\n", ret);
}

int main(void){
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        function();
}