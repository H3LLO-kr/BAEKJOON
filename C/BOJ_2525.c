#include <stdio.h>

int main(void){
    int hour;
    int minute;
    int offset;

    scanf("%d %d", &hour, &minute);
    scanf("%d", &offset);
    minute += offset;
    if (minute >= 60){
        hour += minute / 60;
        minute %= 60;
    }
    if (hour >= 24)
        hour %= 24;
    printf("%d %d\n", hour, minute);
}