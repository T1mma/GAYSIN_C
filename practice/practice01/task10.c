#include <stdio.h>

int a;

int main(){
    scanf("%d", &a);
    printf("%d\n", a & 1);
    printf("%d\n", a | 1);
    printf("%d\n", a ^ 1);
    printf("%d", ~a);
}