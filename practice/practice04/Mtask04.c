#include <stdio.h>

int main() {
    int mas[] = {1, 2, 3, 4, 5};
    int s = sizeof(mas)/sizeof(mas[0]);
    int *start = mas;
    int *end = mas + s - 1;
    while(start < end){
        int a = *start;
        *start = *end;
        *end = a;
        start++;
        end--;
    }
    
}