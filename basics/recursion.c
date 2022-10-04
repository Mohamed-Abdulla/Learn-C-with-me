#include <stdio.h>

int fact(int);
int fibonacci(int);
int display(int);
int main()
{
    int n, f;
    // printf("Enter the number whose factorial you want to calculate?");
    // scanf("%d", &n);
    // f = fact(n);
    // printf("factorial = %d", f);

    // printf("Enter the value of n?");
    // scanf("%d", &n);
    // f = fibonacci(n);
    // printf("%d", f);

    printf("Enter the value of n?");
    scanf("%d", &n);
    f = display(n);
    printf("%d", f);
}

//~factorial
int fact(int n)
{
    if (n == 0) // base case
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return n * fact(n - 1); // recursive case
    }
}

//~fibonacci series

int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n - 1) + fibonacci(n - 2);
    }
}

/*

Memory allocation of Recursive method


Each recursive call creates a new copy of that method in the memory.
Once some data is returned by the method, the copy is removed from the memory.
Since all the variables and other stuff declared inside function get stored in the stack,
therefore a separate stack is maintained at each recursive call.
Once the value is returned from the corresponding function, the stack gets destroyed.
Recursion involves so much complexity in resolving and tracking the values at each recursive call.
Therefore we need to maintain the stack and track the values of the variables defined in the stack.

*/

int display(int n)
{
    if (n == 0)
        return 0; // terminating condition
    else
    {
        printf("%d", n);
        return display(n - 1); // recursive call
    }
}