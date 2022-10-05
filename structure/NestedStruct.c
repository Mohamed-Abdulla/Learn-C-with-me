// #include <stdio.h>
// struct address
// {
//     char city[20];
//     int pin;
//     char phone[14];
// };
// struct employee
// {
//     char name[20];
//     struct address add;
// };
// void main()
// {
//     struct employee emp;
//     printf("Enter employee information?\n");
//     scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
//     printf("Printing the employee information....\n");
//     printf("name: %s\nCity: %s\nPincode: %d\nPhone: %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
// }

// #include <stdio.h>
// #include <string.h>
// struct Employee
// {
//     int id;
//     char name[20];
//     struct Date
//     {
//         int dd;
//         int mm;
//         int yyyy;
//     } doj;
// } e1;
// int main()
// {
//     // storing employee information
//     e1.id = 101;
//     strcpy(e1.name, "Sonoo Jaiswal"); // copying string into char array
//     e1.doj.dd = 10;
//     e1.doj.mm = 11;
//     e1.doj.yyyy = 2014;

//     // printing first employee information
//     printf("employee id : %d\n", e1.id);
//     printf("employee name : %s\n", e1.name);
//     printf("employee date of joining (dd/mm/yyyy) : %d/%d/%d\n", e1.doj.dd, e1.doj.mm, e1.doj.yyyy);
//     return 0;
// }

//~Passing structure to function

#include <stdio.h>
struct address
{
    char city[20];
    int pin;
    char phone[14];
};
struct employee
{
    char name[20];
    struct address add;
};
void display(struct employee);
void main()
{
    struct employee emp;
    printf("Enter employee information?\n");
    scanf("%s %s %d %s", emp.name, emp.add.city, &emp.add.pin, emp.add.phone);
    display(emp); // passing struct variable to display
}
void display(struct employee emp)
{
    printf("Printing the details....\n");
    printf("%s %s %d %s", emp.name, emp.add.city, emp.add.pin, emp.add.phone);
}