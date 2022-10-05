//~Normal approach

// #include <stdio.h>
// void main()
// {
//     char names[2][10], dummy; // 2-dimensioanal character array names is used to store the names of the students
//     int roll_numbers[2], i;
//     float marks[2];
//     for (i = 0; i < 3; i++)
//     {

//         printf("Enter the name, roll number, and marks of the student %d", i + 1);
//         scanf("%s %d %f", &names[i], &roll_numbers[i], &marks[i]);
//         scanf("%c", &dummy); // enter will be stored into dummy character at each iteration
//     }
//     printf("Printing the Student details ...\n");
//     for (i = 0; i < 3; i++)
//     {
//         printf("%s %d %f\n", names[i], roll_numbers[i], marks[i]);
//     }
// }

#include <stdio.h>
#include <string.h>

struct employee
{
    int id;
    char name[50];
    float salary;
} e1, e2; // declaring e1 and e2 variables for structure

int main()
{
    // store first employee information
    e1.id = 101;
    strcpy(e1.name, "Sonoo Jaiswal"); // copying string into char array
    e1.salary = 56000;

    // store second employee information
    e2.id = 102;
    strcpy(e2.name, "James Bond");
    e2.salary = 126000;

    // printing first employee information
    printf("employee 1 id : %d\n", e1.id);
    printf("employee 1 name : %s\n", e1.name);
    printf("employee 1 salary : %f\n", e1.salary);

    // printing second employee information
    printf("employee 2 id : %d\n", e2.id);
    printf("employee 2 name : %s\n", e2.name);
    printf("employee 2 salary : %f\n", e2.salary);
    return 0;
}