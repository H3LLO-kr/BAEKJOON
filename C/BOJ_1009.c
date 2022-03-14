#include <stdio.h>
#include <math.h>
int main(void){
    int N;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        int a, b;
        scanf("%d %d", &a, &b);
        printf("%d\n", (int)pow(a, b) % 10);
    }
}