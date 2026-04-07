#include<stdio.h>
void main() {
    int a = 5, a1 = a++, a2 = ++a, a3 = a--,a4 = --a;
    printf("1)a++ = %d\n", a1);
    printf("2)++a = %d\n", a2);
    printf("3)a-- = %d\n", a3);
    printf("4)--a = %d\n", a4);
}