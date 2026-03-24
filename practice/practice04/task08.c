#include <stdio.h>

int main() {
    int x = 1;
    int *ptr1 = &x;
    int *ptr2 = ptr1;
    *ptr2 = 2;
    printf("%d", x);
    return 0;
}