#include <stdio.h>
int main(void){
    char arr[11];
    scanf("%s", arr);
    int stoppoint = 0;
    for(int i = 0; i < 11; i++){
        if(arr[i] == '\0'){
            stoppoint = i;
            break;
        }
    }
    for(int i = 0; i < stoppoint; i++){
        for(int j = i + 1; j < stoppoint; j++){
            if(arr[i] < arr[j]){
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for(int i = 0; i < stoppoint; i++){
        printf("%c", arr[i]);
    }
    return 0;
}