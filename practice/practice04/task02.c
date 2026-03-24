#include <stdio.h>

int main() {
    int a = 1;
    int *ptr = &a;
    *ptr = 2;
    printf("%d", a);
    return 0;
}