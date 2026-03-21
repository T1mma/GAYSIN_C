#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mas[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
        if(mas[i] < 0){
            mas[i] = 0;
        }
    }
    for(int i = 0; i < n; i++){
        printf("%d ", mas[i]);
    }
    return 0;
}