#include <stdio.h>
#include <string.h>
int main(void){
    int T;
    char arr[51] = {};
    scanf("%d", &T);
    for(int i = 0; i < T; i++){
        int x = 0; int y = 0;
        int result = 0;
        scanf("%s", arr);
        for(int j = 0; j < strlen(arr); j++){
            if(arr[j] == '(') x++;
            else{
                y++;
                if(y > x){
                    result = 1;
                    break;
                }
            }
        }
        if(result || x != y) printf("NO\n");
        else printf("YES\n");
    }
    return 0;
}