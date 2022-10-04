/*

Pointer to function in C
As we discussed in the previous chapter, a pointer can point to a function in C.
However, the declaration of the pointer variable must be the same as the function.
Consider the following example to make a pointer pointing to the function.

*/

#include <stdio.h>
int addition();
int main()
{
    int result;
    int (*ptr)();
    ptr = &addition;
    result = (*ptr)();
    printf("The sum is %d", result);
}

int addition()
{
    int a, b;
    printf("Enter two numbers?");
    scanf("%d %d", &a, &b);
    return a + b;
}
