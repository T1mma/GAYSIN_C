#include<stdio.h>
void main() {
    int nomber;
    printf("введите трехзначное число\n");
    scanf("%d", &nomber);
    printf("кол-во сотен -> %d, кол-во десятков -> %d, кол-во едениц -> %d", (nomber/100)%10, (nomber/10)%10, nomber%10);
}