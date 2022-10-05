/*
The sizeof() operator behaves differently according to the type of the operand.

Operand is a data type
Operand is an expression
When operand is a data type.


*/

//~Operand is an expression

// #include <stdio.h>
// int main()
// {
//     int x = 89;                                                      // variable declaration.
//     printf("size of the variable x is %d", sizeof(x));               // Displaying the size of ?x? variable.
//     printf("\nsize of the integer data type is %d", sizeof(int));    // Displaying the size of integer data type.
//     printf("\nsize of the character data type is %d", sizeof(char)); // Displaying the size of character data type.

//     printf("\nsize of the floating data type is %d", sizeof(float)); // Displaying the size of floating data type.
//     return 0;
// }

//~When operand is an expression

#include <stdio.h>
int main()
{
    double i = 78.0;                                           // variable initialization.
    float j = 6.78;                                            // variable initialization.
    printf("size of (i+j) expression is : %d", sizeof(i + j)); // Displaying the size of the expression (i+j).
    return 0;
}