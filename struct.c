#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student vokey;
    vokey.age = 19;
    vokey.gpa = 3.89;
    strcpy(vokey.name, "Haziq");
    strcpy(vokey.major, "CS");

    printf("%d \n",vokey.age);
    printf("%0.2f \n", vokey.gpa);
    printf("%s \n", vokey.name);
    printf("%s",vokey.major);
    
    return 0;


}