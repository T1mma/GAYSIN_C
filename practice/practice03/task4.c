#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mas[n];
    int sum = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
        sum+=mas[i];
    }
    printf("%d", sum);
    return 0;
}