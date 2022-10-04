#include <stdio.h>

void sum();
int c = 0;
int main()
{
    // int a; // auto
    // char b;
    // float c;
    // printf("%d %c %f", a, b, c); // printing initial default value of automatic variables a, b, and c.

    //~auto

    // int a = 10, i;
    // printf("%d ", ++a);
    // {
    //     int a = 20;
    //     for (i = 0; i < 3; i++)
    //     {
    //         printf("%d ", a); // 20 will be printed 3 times since it is the local value of a
    //     }
    // }
    // printf("%d ", a); // 11 will be printed since the scope of a = 20 is ended.

    //~Static

    // int i;
    // for (i = 0; i < 3; i++)
    // {
    //     sum(); // The static variables holds their value between multiple function calls.
    // }

    //~register

    register int a; // variable a is allocated memory in the CPU register. The initial default value of a is 0.
    register int b = 0;
    // printf("%d", a);
    // printf("%d", &b);

    extern int c;

    printf("%d", c);

    return 0;
}

void sum()
{
    static int a = 10;
    static int b = 24;
    printf("%d %d \n", a, b);
    a++;
    b++;
}