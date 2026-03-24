#include <stdio.h>

int main() {
    int N;
    int k = 0;
    scanf("%d", &N);
    for(int i = 1; i < N+1; i++){
        if(N%i == 0){
            k+=1;
        }
    }
    printf("%d", k);
    return 0;
}