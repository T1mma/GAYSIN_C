#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    int b;
    b = sizeof(a);
    int c = 10;
    for(int i = 0; i < b; i++){
        c*10;
    }
    for(int l = 0; l < b; l++){
        a = a%c;
    }
    printf("%d", a);
    return 0;
}