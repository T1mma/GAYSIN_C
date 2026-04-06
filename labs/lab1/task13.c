#include <stdio.h>

int main() {
    int sec;
    scanf("%d", &sec);
    
    int hours = sec / 3600;
    int minutes = (sec % 3600) / 60;
    int seconds = sec % 60;
    
    printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    
    return 0;
}