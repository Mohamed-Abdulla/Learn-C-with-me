
#include <stdio.h>
#include <stdlib.h>
void main()
{
    char c;
    int choice, dummy;
    // do
    // {
    //     printf("\n1. Print Hello\n2. Print Javatpoint\n3. Exit\n");
    //     scanf("%d", &choice);
    //     switch (choice)
    //     {
    //     case 1:
    //         printf("Hello");
    //         break;
    //     case 2:
    //         printf("Javatpoint");
    //         break;
    //     case 3:
    //         exit(0);
    //         break;
    //     default:
    //         printf("please enter valid choice");
    //     }
    //     printf("\ndo you want to enter more?");
    //     scanf("%d", &dummy);
    //     scanf("%c", &c);
    // } while (c == 'y');

    //~print 1 table

    // int i = 1;
    // do
    // {
    //     printf("%d \n", i);
    //     i++;
    // } while (i <= 10);

    //~print any table

    int i = 1, number = 0;
    printf("Enter a number: ");
    scanf("%d", &number);
    do
    {
        printf("%d \n", (number * i));
        i++;
    } while (i <= 10);
}