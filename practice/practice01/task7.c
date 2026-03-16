#include <stdio.h>

int a,b;

int main(){
    scanf("%d %d", &a, &b);
    if(a>b){
        printf("%.1f", (float)a/(float)b);
    }
    else if(b>a){
        printf("%.1f", (float)b/(float)a);
    }
    return 0;
}