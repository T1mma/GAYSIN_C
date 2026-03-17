#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a;
    for(int i = 1; i < N; i++){
        scanf("%d", &a);
        if(a>10){
            printf("%d\n", a);
        }
    }
    return 0;
}