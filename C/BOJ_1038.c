#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int isdnumber(int n){
    int digit = ceil(log10(n + 1));
    if(digit == 1){
        return 1;
    }
    int* num_arr = malloc(sizeof(int) * digit);
    for(int i = 0; i < digit; i++){
        num_arr[i] = n % 10;
        n /= 10;
    }
    int state = 1;
    for(int i = 0; i < digit - 1; i++){
        if(num_arr[i] < num_arr[i + 1])
            continue;
        else{
            state = 0;
            break;
        }
    }
    free(num_arr);
    return state;
}

int count(int n){
    int ret = 0;
    for(int i = 1; i < n + 1; i++){
        ret += isdnumber(i);
    }
    return ret;
}

int main(void){
    int n;
    scanf("%d", &n);
    if(n == 0){
        printf("0");
        return 0;
    }
    long long low = 1;
    long long high = 9876543210;
    long long mid;
    while(low <= high){
        mid = (low + high) / 2;
        if(count(mid) > n){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    while(count(mid - 1) == n){
        mid -= 1;
    }
    printf("%lld", mid);
}