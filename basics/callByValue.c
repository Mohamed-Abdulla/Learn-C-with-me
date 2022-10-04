#include <stdio.h>

//~Call by Value Example: Swapping the values of the two variables
void swap(int, int); // prototype of the function

void change(int num)
{
    printf("Before adding value inside function num=%d \n", num);
    num = num + 100;
    printf("After adding value inside function num=%d \n", num);
}
int main()
{
    // int x = 100;
    // printf("Before function call x=%d \n", x);
    // change(x); // passing value in function
    // printf("After function call x=%d \n", x);

    int a = 10;
    int b = 20;
    printf("Before swapping the values in main a = %d, b = %d\n", a, b); // printing the value of a and b in main
    swap(a, b);
    printf("After swapping values in main a = %d, b = %d\n", a, b);
    // The value of actual parameters do not change by changing the formal parameters in call by value, a = 10, b = 20
    return 0;
}

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
    printf("After swapping values in function a = %d, b = %d\n", a, b); // Formal parameters, a = 20, b = 10
}