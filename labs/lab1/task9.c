#include <stdio.h>
#include <math.h>

int main() {
    int x;
    int res1, res2;
    scanf("%d", &x);
    res1 = pow(x, 2) + 2*x + 1;
    res2 = pow(x + 1, 2)  - pow(x - 1, 2);
    printf("%d, %d", res1, res2);
    return 0;
}