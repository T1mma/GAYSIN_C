#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mas[n];
    int kol = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
        if(mas[i] < 0){
            kol++;
        }
    }
    printf("%d", kol);
    return 0;
}