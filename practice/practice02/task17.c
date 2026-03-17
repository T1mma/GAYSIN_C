#include <stdio.h>

int main() {
    int N;
    int a = 0;
    while(N != 0){
        scanf("%d", &N);
        if(N>0){
            a+=N;
        }
    }
    printf("%d", a);
    return 0;
}