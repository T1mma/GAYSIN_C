#include<stdio.h>
void main() {
    int a;
    scanf("%d", &a);
    printf("последняя цифра числа %d -> %d", a, a%10);
}