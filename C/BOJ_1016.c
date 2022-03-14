#include <stdio.h>
#include <stdlib.h>
int main(void){
    unsigned long long min, max;
    scanf("%lld %lld", &min, &max);
    char* arr = malloc(sizeof(char) * (max + 1));
    for(unsigned long long i = 0; i < max + 1; i++){
        arr[i] = 1;
    }
    for(unsigned long long i = 2; i * i <= max; i++){
        for(unsigned long long j = 1; i * i * j <= max; j++){
            if(i * i * j >= min) arr[i * i * j] = 0;
        }
    }
    int count = 0;
    for(unsigned long long i = min; i < max + 1; i++){
        if(arr[i] == 1) count++;
    }
    printf("%d", count);
    free(arr);
    return 0;
}