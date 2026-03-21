#include <stdio.h>

int main(){
    int n; 
    scanf("%d", &n);
    int mas[n];
    double a;
    int b;
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
        b+=mas[i];
    }
    a = b/n;
    printf("%f", a);
    return 0;
}