#include <stdio.h>

int main() {
    char str[] ="hello!!!!";
    char *ptr = str;
    while(*ptr != '\0'){
        if(*ptr == 'a'){
            *ptr = '*';
        }
        if(*ptr == 'e'){
            *ptr = '*';
        }
        if(*ptr == 'i'){
            *ptr = '*';
        }
        if(*ptr == 'o'){
            *ptr = '*';
        }
        if(*ptr == 'u'){
            *ptr = '*';
        }
        
        printf("%c", *ptr);
        ptr++;
    }
    
    return 0;
}