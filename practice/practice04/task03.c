#include <stdio.h>

int main() {
    int a = 1;
    int b = 2;
    int *ptr = &a;
    int *t = &b;
    *ptr = 2;
    *t = 3;
    printf("%d\n%d", *ptr, *t);
    return 0;
}