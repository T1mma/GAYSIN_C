#include <stdio.h>

int a;

int main(){
    scanf("%d", &a);
    if(a%2==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}