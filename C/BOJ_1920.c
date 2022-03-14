#include <stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    int A[100000];
    for(int i = 0; i < N; i++) scanf("%d", A + i);
    int M;
    scanf("%d", &M);
    int B[100000];
    for(int i = 0; i < M; i++) scanf("%d", B + i);
    for(int i = 0; i < M; i++){
        int j = 0;
        for(j = 0; j < N; j++){
            if(B[i] == A[j]){
                printf("%d\n", 1);
                break;
            }
        }
        if(j == N) printf("%d\n", 0);
    }
    
}