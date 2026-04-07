#include<stdio.h>

struct Student {
    char * name;
    int age;
    float score;
};

struct Student students[5] =
{
    {"Timur", 15, 1},
    {"Roland", 17, 6},
    {"Ivan", 11, 5.5},
    {"Alexandr", 10, 2.2},
    {"Vlad", 1, 1}
};

int main(){   

    for (int i=0; i<5; i++){
        printf("Name student - %s, age - %d, now score - %.2f\n", students[i].name, students[i].age, students[i].score);
    }
    
    return 0;
}
