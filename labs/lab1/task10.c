#include<stdio.h>
void main() {
    int a = 5, b = 10;
    printf("before -> a=%d b=%d\n", a, b);
    int c = a;
    a = b;
    b = c;
    printf("after -> a=%d b=%d\n", a, b);
}