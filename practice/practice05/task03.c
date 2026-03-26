#include <stdio.h>

int main() {
    char str[] = "hello!";
    int len = sizeof(str) / sizeof(str[0]);
    char *p = str;               
    char *q = &str[len - 2];     

    while (q >= p) {
        printf("%c", *q);        
        q--;
    }

    return 0;
}