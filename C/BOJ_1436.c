#include <stdio.h>
int main(void){
    int ord;
    scanf("%d", &ord);
    int count = 0;
    int i;
    for(i = 665; count != ord; i++){
        int num = i;
        while(num > 9){
            if(num % 10 == 6){
                num /= 10;
                if(num % 10 == 6){
                    num /= 10;
                    if(num % 10 == 6){
                        count++;
                        break;
                    }
                    else num /= 10;
                }
                else num /= 10;
            }
            else num /= 10;
        }
    }
    printf("%d", i - 1);
    return 0;
}