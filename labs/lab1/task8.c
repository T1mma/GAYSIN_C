#include <stdio.h>

int main() {
    int x = 2147483648;
    x = x+2;
    printf("%d", x);
    return 0;
    // потому что это максимальное положительное число
}