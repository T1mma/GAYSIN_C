#include <stdio.h>

int main() {
    int N;
    int a = 0;
    scanf("%d", &N);
    for(int i = 1; i < N; i++){
        if(i % 3 == 0){
            a+=i;
        }
    }
    printf("%d", a);
    return 0;
}