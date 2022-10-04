#include <stdio.h>
int main()
{

    //~find the largest number
    // int a, b, c;
    // printf("Enter three numbers?");
    // scanf("%d %d %d", &a, &b, &c);
    // if (a > b && a > c)
    // {
    //     printf("%d is largest", a);
    // }
    // if (b > a && b > c)
    // {
    //     printf("%d is largest", b);
    // }
    // if (c > a && c > b)
    // {
    //     printf("%d is largest", c);
    // }
    // if (a == b && a == c)
    // {
    //     printf("All are equal");
    // }

    //~find the number is odd or even

    int number = 0;
    printf("enter a number:");
    scanf("%d", &number);
    if (number % 2 == 0)
    {
        printf("%d is even number", number);
    }
    else
    {
        printf("%d is odd number", number);
    }

    //~eligible to vote or not
    int age;
    printf("Enter your age?");
    scanf("%d", &age);
    if (age >= 18)
    {
        printf("You are eligible to vote...");
    }
    else
    {
        printf("Sorry ... you can't vote");
    }
}