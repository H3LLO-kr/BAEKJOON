#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int digit(int n){
    int i = 0;
    while(1){
        if(n / 10 == 0){
            i++;
            break;
        }
        else{
            i++;
            n /= 10;
        }
    }
    return i;
}
int palindrome(char arr[]){
    int s = sizeof(arr) / sizeof(char);
    for(int i = 0; i < s; i++){
        if(arr[i] != arr[s - 1 - i]){
            printf("no\n");
            return 0;
        }
    }
    printf("yes\n");
}
int main(void){
    while(1){
        int n;
        scanf("%d", &n);
        int d = digit(n); // 자릿수 구하기
        char* arr = malloc(sizeof(int) * d);
        sprintf(arr, "%d", n);
        if(n == 0) return 0;
        else palindrome(arr);
        free(arr);
    }
}