#include <stdio.h>

float a;

int main(){
    scanf("%f", &a);
    printf("%.2fF\n", (float)(a * (9/5) + 32));
    printf("%.2fK", (float)(a + 273));
    return 0;
}