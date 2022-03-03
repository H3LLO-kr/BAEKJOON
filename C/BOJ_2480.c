#include <stdio.h>

int sort_b(int *arr){
    for (int i = 2; i >= 0; i--){
        for (int j = 0; j < i; j++){
            if (arr[j] > arr[j + 1]){
                int tmp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = tmp;
            }
        }
    }
}

int main(void){
    int dice[3];
    int count = 1;

    scanf("%d %d %d", dice, dice + 1, dice + 2);
    sort_b(dice);
    if (dice[0] == dice[1])
        count++;
    if (dice[1] == dice[2])
        count++;
    if (count == 3)
        printf("%d\n", 10000 + dice[0] * 1000);
    else if (count == 2)
        printf("%d\n", 1000 + dice[1] * 100);
    else
        printf("%d\n", dice[2] * 100);
}