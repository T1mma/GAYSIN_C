#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for(int i = 1; i < N; i++){
        if(i*i > 50){
            printf("%d\n", i*i);
        }
    }
    return 0;
}