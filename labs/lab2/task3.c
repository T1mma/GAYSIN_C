#include<stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Person
{
    char * name;
    struct Date birthday;    
};

struct Date dates[3] =
{
    {15, 6, 2009},
    {22, 1, 2000},
    {7, 9, 2020}
};


int main(){
    struct Person persons[3] =
{
    {"Timur", dates[0]},
    {"Alexander", dates[1]},
    {"Roland", dates[2]},
};
    for(int i=0; i<3; i++){
        if (dates[i].year >=2000){
            printf("Name: %s, Birth Year: %d.%d.%d\n", persons[i].name, persons[i].birthday.day, persons[i].birthday.month, persons[i].birthday.year);
        }
    }
}
