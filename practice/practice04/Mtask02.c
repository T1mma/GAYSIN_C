#include <stdio.h>

int main() {
    int mas[] = {1, 2, 3, 4, 5};
    int *p = mas;
    int size = sizeof(mas)/sizeof(mas[1]);
    int sum = 0;
    for(int i = 0; i < size; i++){
        sum+=*p;
        p++;
    }
    printf("%d", sum);
    return 0;
}