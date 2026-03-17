#include <stdio.h>

int main(){
    int N;
    int a = 1;
    scanf("%d", &N);
    if(N%2 != 0){
        for(int l = 1; l < N+1; l++){
            a = a*l;
        }
        printf("%d", a);
    }
    return 0;
}