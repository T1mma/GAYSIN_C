#include <stdio.h>

int main() {
    char str[] = "hello!";
    char *p = str;
    int count = 0;
    while(*p != '\0'){
        count++;
        p++;
    }
    printf("%d", count);
    return 0;
}