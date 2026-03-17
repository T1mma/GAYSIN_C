#include <stdio.h>

int main() {
    int N;
    int a = 0;
    int k;
    scanf("%d", &N);
    for(int i = 1; i < N; i++){
        scanf("%d", &k);
        if(k%7 == 0){
            a+=1;
        }
    }
    printf("%d", a);
    return 0;
}