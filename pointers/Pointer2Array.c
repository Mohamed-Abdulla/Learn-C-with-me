/*
Pointer to Array of functions in C

To understand the concept of an array of functions, we must understand the array of function.
Basically, an array of the function is an array which contains the addresses of functions.
In other words, the pointer to an array of functions is a pointer pointing to an array
which contains the pointers to the functions. Consider the following example.


*/

#include <stdio.h>
int show();
int showadd(int);
int (*arr[3])();
int (*(*ptr)[3])(); // double pointer which points the address of the arr pointer

int main()
{
    int result1;
    arr[0] = show;
    arr[1] = showadd;
    printf("\n %d", arr[0]);
    printf("\n %d", arr[1]);

    ptr = &arr;
    result1 = (**ptr)();
    printf("\nprinting the value returned by show : %d", result1);
    (*(*ptr + 1))(result1);
}
int show()
{
    int a = 65;
    return a++;
}
int showadd(int b)
{
    printf("\nAdding 90 to the value returned by show: %d", b + 90);
}