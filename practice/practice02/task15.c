#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int a = 10000000000;
    int k;
    for(int i = 1; i < N; i++){
        scanf("%d", &k);
        if(k<a){
            a = k;
        }
    }   
    printf("%d", a);
    return 0;
}