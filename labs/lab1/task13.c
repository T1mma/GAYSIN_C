#include<stdio.h>
#include<time.h>
void main() {
    time_t t = time(NULL);
    struct tm *now = localtime(&t);
    int total_seconds = (now->tm_hour * 3600) + (now->tm_min * 60) + now->tm_sec;

    printf("Текущее время: %02d:%02d:%02d\n", now->tm_hour, now->tm_min, now->tm_sec);
    printf("Секунд с начала суток: %d\n", total_seconds);
}