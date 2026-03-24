#include <stdio.h>

int main() {
    int mas[] = {1, 2 ,3 ,4 ,5};
    int *p = mas;
    int size = sizeof(mas)/sizeof(mas[0]);
    for(int i = 0; i < size; i++){
        printf("%d ", *p);
        p++;
    }
    return 0;
}