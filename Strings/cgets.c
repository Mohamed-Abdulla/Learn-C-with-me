// #include <stdio.h>
// void main()
// {
//     char s[20];
//     printf("Enter the string? ");
// gets(s);
//     fgets(s, 20, stdin);
//     printf("You entered %s", s);
// }

//~C puts()

#include <stdio.h>
#include <string.h>
int main()
{
    char name[20];
    printf("Enter your name: ");
    gets(name); // reads string from user
    printf("Your name is: ");
    puts(name); // displays string
    return 0;
}