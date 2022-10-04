/*

When to use an infinite loop
An infinite loop is useful for those applications that accept the user input and generate the output continuously until the user exits from the application manually. In the following situations, this type of loop can be used:

All the operating systems run in an infinite loop as it does not exist after performing some task. It comes out of an infinite loop only when the user manually shuts down the system.
All the servers run in an infinite loop as the server responds to all the client requests. It comes out of an indefinite loop only when the administrator shuts down the server manually.
All the games also run in an infinite loop. The game will accept the user requests until the user exits from the game.
We can create an infinite loop through various loop structures. The following are the loop structures through which we will define the infinite loop:

for loop
while loop
do-while loop
go to statement
C macros

*/

#include <stdio.h>
#define infinite for (;;)
int main()
{
    // for (;;)
    // {
    //     printf("Hello javatpoint");
    // }

    // int i = 0;
    // while (1)
    // {
    //     printf("i is :%d", i);
    //     i++;
    // }

    // do
    // {
    //     // body of the loop..
    // } while (1);

    //~Macros

    // infinite
    // {
    //     printf("Hello javatpoint");
    // }

    // char ch;
    // while (1)
    // {
    //     ch = getchar();
    //     if (ch == 'n')
    //     {
    //         break;
    //     }
    //     printf("\nhello");
    // }

    int n = 2, i, choice;
    do
    {
        i = 1;
        while (i <= 10)
        {
            printf("%d X %d = %d\n", n, i, n * i);
            i++;
        }
        printf("do you want to continue with the table of %d , enter any non-zero value to continue.", n + 1);
        scanf("%d", &choice);
        if (choice == 0)
        {
            break;
        }
        n++;
    } while (1);

    return 0;
}