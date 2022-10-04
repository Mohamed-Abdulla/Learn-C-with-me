#include <stdio.h>

// int *getarray()
// {
//     int arr[5];
//     printf("Enter the elements in an array : ");
//     for (int i = 0; i < 5; i++)
//     {
//         scanf("%d", &arr[i]);
//     }
//     return arr;
// }

int *getarray(int *a)
{

    printf("Enter the elements in an array : ");
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &a[i]);
    }
    return a;
}

/*

In the above program, getarray() function returns a variable 'arr'.
It returns a local variable, but it is an illegal memory location to be returned,
which is allocated within a function in the stack. Since the program control comes back to the main() function,
and all the variables in a stack are freed. Therefore, we can say that this program is returning memory location,
which is already de-allocated,
so the output of the program is a segmentation fault.


---------------------
There are three right ways of returning an array to a function:

Using dynamically allocated array
Using static array
Using structure


*/
int main()
{
    // int *n;
    // n = getarray();
    // printf("\nElements of array are :");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%d", n[i]);
    // }

    int *n;
    int a[5];
    n = getarray(a);
    printf("\nElements of array are :");
    for (int i = 0; i < 5; i++)
    {
        printf("%d", n[i]);
    }
    return 0;
}