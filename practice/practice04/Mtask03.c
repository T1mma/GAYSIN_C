#include <stdio.h>

int main() {
    int mas[] = {1, 2, 3, 4, 5};
    int s = sizeof(mas)/sizeof(mas[1]);
    int *start = mas;
    int *end = mas + s - 1;
    int max = *start;
    while(start <= end){
        if(*start > max){
            max = *start;
        }
        if(*end > max){
            max = *end;
        }
        start++;
        end--;
    }
    printf("%d", max);
    return 0;
}