#include <stdio.h>

int a;

int main(){
    scanf("%d", &a);
    printf("%d", a + __INT_MAX__);
    return 0;
}