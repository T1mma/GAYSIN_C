#include <stdio.h> 

int main() {
    int N;
    int k = 0;
    scanf("%d", &N);
    for(int i = 1; i < N; i++) {
        int a;
        scanf("%d", &a);
        if(a < 0){
            k+=a;
        }
    }
    printf("%d", k);
    return 0;
}