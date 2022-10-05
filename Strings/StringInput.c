// #include <stdio.h>
// void main()
// {
//     char s[20];
//     printf("Enter the string?");
//     scanf("%[^\n]s", s); // after space it stops taking input
//     printf("You entered %s", s);
// }

// #include <stdio.h>
// void main()
// {
//     char s[11] = "javatpoint";
//     char *p = s;     // pointer p is pointing to string s.
//     printf("%s", p); // the string javatpoint is printed if we print p.
// }

// #include <stdio.h>
// void main()
// {
//     char *p = "hello javatpoint";
//     printf("String p: %s\n", p);
//     char *q;
//     printf("copying the content of p into q...\n");
//     q = p;
//     printf("String q: %s\n", q);
// }
// Once a string is defined, it cannot be reassigned to another set of characters.
// However, using pointers, we can assign the set of characters to the string. Consider the following example.

#include <stdio.h>
void main()
{
    char *p = "hello javatpoint";
    printf("Before assigning: %s\n", p);
    p = "hello";
    printf("After assigning: %s\n", p);
}