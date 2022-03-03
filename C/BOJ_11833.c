#include <stdio.h>
#include <stdlib.h>
int sum(int* arr, int K){
    int sum = 0;
    for(int i = 0; i < K; i++) sum += arr[i];
    return sum;
}
int main(void){
    int N; int K;
    scanf("%d %d",&N, &K);
    int* arr = malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++){
        arr[i] = 0;
    }
    int cursor = 0; int count = 0;
    printf("<");
    while(sum(arr, N) < N){
        while(1){
            if(arr[cursor] == 0){
                count++;
                if(count == K) break;
                cursor++; cursor %= N;
            }
            else{cursor++; cursor%= N;}
        }
        arr[cursor] = 1; count = 0;
        printf("%d", cursor + 1);
        if(sum(arr, N) != N) printf(", ");
    }
    printf(">");
    free(arr);
}