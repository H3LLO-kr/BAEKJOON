#include <stdio.h>
#include <stdlib.h>
int main(void){
    int N;
    scanf("%d", &N);
    int* A = malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++){
        scanf("%d", A + i);
    }
    int num = (N - 1) * (N - 2) * (N - 3) / 6;
    int* resA = malloc(sizeof(int) * num);
    int res[4] = {1, 1, 1, 1};
    int numres = 0;
    for(int i = 0; i < N - 2; i++){
        for(int j = i + 1; j < N - 1; j++){
            for(int k = j + 1; k < N; k++){
                for(int l = 0; l <= i; l++) res[0] *= A[l];
                for(int l = i + 1; l <= j; l++) res[1] *= A[l];
                for(int l = j + 1; l <= k; l++) res[2] *= A[l];
                for(int l = k + 1; l < N; l++) res[3] *= A[l];
                for(int l = 0; l < 4; l++) resA[numres] += res[l];
                numres++;
            }
        }
    }
    int max = 0;
    for(int i = 0; i < num; i++){
        if(max < resA[i]) max = resA[i];
    }
    printf("%d", max);
    free(resA);
    free(A);
    return 0;
}