#include <stdio.h>
int count = 0;
int make2one(int x){
    if(x % 3 == 0){
        if(x / 3 == 1) return count + 1;
        else{
            count++;
            return make2one(x / 3);
        }
    }
    else if(x % 2 == 0){
        if(x / 2 == 1) return count + 1;
        else{
            count++;
            return make2one(x / 2);
        }
    }
    else{
        if(x - 1 == 1){
            return count + 1;
        }
        else{
            count++;
            return make2one(x - 1);
        }
    }
}
int main(void){
    int x;
    scanf("%d", &x);
    printf("%d", make2one(x));
    return 0;
}