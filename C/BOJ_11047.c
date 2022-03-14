#include <stdio.h>
#include <stdlib.h>
int main(void){
    int N, K;
    scanf("%d %d", &N, &K);
    int* a = malloc(sizeof(int) * N);
    int count = 0;
    for(int i = 0; i < N; i++){
        scanf("%d", a + i);
    }
    for(int i = N - 1; i >= 0; i--){
        if(K / a[i] != 0){
            count += K / a[i];
            K -= (K / a[i]) * a[i];
        }
    }
    printf("%d", count);
    free(a);
}