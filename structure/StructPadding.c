// #include <stdio.h>
// struct student
// {
//     char a;
//     int c;
//     char b;
// };
// int main()
// {
//     struct student stud1; // variable declaration of the student type..
//     // Displaying the size of the structure student.
//     printf("The size of the student structure is %d", sizeof(stud1));
//     return 0;
// }

// #include <stdio.h>
// #pragma pack(1)
// struct base
// {
//     int a;
//     char b;
//     double c;
// };
// int main()
// {
//     struct base var; // variable declaration of type base
//     // Displaying the size of the structure base
//     printf("The size of the var is : %d", sizeof(var));
//     return 0;
// }

#include <stdio.h>
// #pragma pack(1)

struct base
{
    int a;
    char b;
    double c;
} __attribute__((packed));
;
int main()
{
    struct base var; // variable declaration of type base
    // Displaying the size of the structure base
    printf("The size of the var is : %d", sizeof(var));

    return 0;
}