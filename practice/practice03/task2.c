#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mas[n];
    int a = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
        if(mas[i] > a){
            a = mas[i];
        }
    }
    printf("%d", a);
    return 0;
}