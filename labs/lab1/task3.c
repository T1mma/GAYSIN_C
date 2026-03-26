#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14f;
    char c = 'A';
        
    printf("a = %d, address = %p\n", a, (void*)&a);
    printf("b = %.2f, address = %p\n", b, (void*)&b);
    printf("c = %c, address = %p\n\n", c, (void*)&c);
    return 0;
}