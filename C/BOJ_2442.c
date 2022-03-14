#include <stdio.h>
int main(void){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        for(int j = 0; j < N * 2; j++){
            if(j + 1 >= N - i && j + 1 <= N + i) printf("*");
            else if(j + 1 > N + i) break;
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}