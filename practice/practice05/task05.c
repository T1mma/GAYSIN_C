#include <stdio.h>

int main() {
    char str[] ="hello!!!!";
    char *ptr = str;
    int count = 0;
    while(*ptr != '\0'){
        if(*ptr == '!'){
            count++;
        }
        ptr++;
    }
    if(count > 3){
        printf("STOP");
    }
    return 0;
}