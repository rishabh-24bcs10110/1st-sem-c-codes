// 9.1 Define a structure type, personal, that would contain person name, date of joining and salary.
// Using this structure, write a program to read this information for one person from the key board and 
// print the same on the screen.

#include <stdio.h>
#include <string.h>

struct person {
    char name[20];
    int date;
    float salary;
} p;

int main()
{
    strcpy(p.name, " ");
    
    printf("Enter details: ");
    scanf("%s %d %f", &struct.date, &struct.salary);
    
    printf("The details are:\n");
    printf("%s %d %f", struct.name, struct.date, struct.salary);

    return 0;
}