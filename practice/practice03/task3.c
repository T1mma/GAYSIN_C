#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int mas[n];
    int min1 = 100;
    int a = 0;
    for(int i = 0; i < n; i++){
        scanf("%d", &mas[i]);
        if(mas[i] < min1){
            min1 = mas[i];
            a = i;
        }
    }
    printf("%d\n", min1);
    printf("%d", a);
    return 0;
}