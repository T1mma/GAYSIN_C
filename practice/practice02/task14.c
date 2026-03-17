#include <stdio.h>

int main() {
    int N;
    int k;
    scanf("%d", &N);
    int a = 0;
    for(int i = 1; i < N; i++){
        scanf("%d", &k);
        if(k>a){
            a = k;
        }
    }
    printf("%d", a);
    return 0;
}