// The continue statement in C language is used to bring the program control to the beginning of the loop.
// The continue statement skips some lines of code inside the loop and continues with the next iteration.
// It is mainly used for a condition so that we can skip some code for a particular condition.

#include <stdio.h>
void main()
{
    // int i = 0;
    // while (i != 10)
    // {
    //     printf("%d", i);
    //     continue;
    //     i++;
    // }

    int i = 1; // initializing a local variable
    // starting a loop from 1 to 10
    for (i = 1; i <= 10; i++)
    {
        if (i == 5)
        {             // if value of i is equal to 5, it will continue the loop
            continue; // skip if value of i is 5
        }
        printf("%d \n", i);
    } // end of for loop
}