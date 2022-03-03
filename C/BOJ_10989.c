#include <stdio.h>
int counts[10001] = {0};
int main(void){
    int N; int num;
    scanf("%d", &N);
    for(int i = 0; i < N; i++){
        scanf("%d", &num);
        counts[num]++;
    }
    for(int i = 0; i < 10001; i++){
        for(int j = 0; j < counts[i]; j++){
            printf("%d\n", i);
        }
    }
    return 0;
}