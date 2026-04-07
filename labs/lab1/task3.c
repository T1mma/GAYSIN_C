#include<stdio.h>

void main() {
    int a = 123;
    float b = 20.1234;
    char c = 'S';
    printf("a = %d\nadress - %p\n", a, (void*)&a);
    printf("b = %d\nadress - %p\n", b, (void*)&b);
    printf("c = %d\nadress - %p\n", c, (void*)&c);
}