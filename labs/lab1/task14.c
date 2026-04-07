#include<stdio.h>
void main() {
    int a, b, c;
    printf("%p %p, %p\n", &a, &b, &c);
    printf("raznica a - b = %lo, b-a = %lo", (long long)&a-(long long)&b,(long long)&b - (long long)&c);
}