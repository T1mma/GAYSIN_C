#include <stdio.h>

int main() {
    int x = 10;
    int *ptr1 = &x;
    int *ptr2 = &x;
    if(&ptr1 == &ptr2){
        printf("+");
    }
    else{
        printf("-");
    }
    return 0;
}
