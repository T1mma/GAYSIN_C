#include <stdio.h>

int main() {
    int N;
    int a;
    int k = 0;
    scanf("%d", &N);
    for(int i = 1; i < N; i++){
        scanf("%d", &a);
        if(a > 0){
            k+=1;
        }
    }
    printf("%d", k);
    return 0;
}