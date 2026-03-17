#include <stdio.h>

int main() {
    int N;
    int a = 0;
    scanf("%d", &N);
    for(int i = 1; i < N; i++){
        if(i%2 == 0){
            a+=1;
        }
    }
    printf("%d", a);
    return 0;
}