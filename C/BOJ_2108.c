#include <stdio.h>
#include <stdlib.h>
int main(void){
    int N;
    scanf("%d", &N);
    int* arr = (int*)malloc(sizeof(int) * N);
    for(int i = 0; i < N; i++){
        scanf("%d", arr + i);
    }
    for(int i = 0; i < N; i++){
        for(int j = i + 1; j < N; j++){
            if(arr[i] > arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int avg = 0;
    for(int i = 0; i < N; i++){
        avg += arr[i];
    }
    avg /= N;
    printf("%d\n%d\n", avg, arr[N/2 + 1]);
    int* arrcount = (int*)malloc(sizeof(int) * arr[N - 1]);
    for(int i = 0; i < arr[N - 1]; i++){
        arrcount[i] = 0;
    }
    for(int i = 0; i < N; i++) arrcount[arr[i]]++;
    int max = 0; int maxarr = 0;
    for(int i = 0; i < N; i++){
        if(arrcount[arr[i]] > max){
            max = arrcount[arr[i]];
            maxarr = arr[i];
        }
    }
    printf("%d\n%d", maxarr, arr[N - 1] - arr[0]);
    free(arrcount);
    free(arr);
    return 0;
}