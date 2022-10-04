#include <stdio.h>
/*
We can perform arithmetic operations on the pointers like addition, subtraction, etc. However, as we know that pointer contains the address, the result of an arithmetic operation performed on the pointer will also be a pointer if the other operand is of type integer. In pointer-from-pointer subtraction, the result will be an integer value. Following arithmetic operations are possible on the pointer in C language:

Increment
Decrement
Addition
Subtraction
Comparison


*/
int main()
{
    int a = 10;
    int *p = &a;

    // Pointer arithmetic
    printf("%d\n", p);  // address  - for eg: p is 2002
    printf("%d\n", *p); // value

    printf("size of integer is %d bytes\n", sizeof(int));
    printf("\n%d", p + 1);    // address - for eg: p+1 is 2006 - bcoz int has 4 bytes
    printf("\n%d", *(p + 1)); // address of p
}