//~Memory allocation
//~In C, each data has its own address.

//~Data type taking memory

//~int - 4 bytes
//~char -1 byte
//~float - 4bytes

//. Pointers - variables that store address of another variable

// int a;

//~Pointer varaiable -Now P is a pointer variable that store address of an integer a .
// int *p; // defining pointer variable

// To store address of a in p
// p = &a;
// a = 5;
#include <stdio.h>

int main()
{
    int a = 10;
    int *p = &a;
    // a = 8;
    // p = &a;
    *p = 12; //* dereferencing - now value at address a is changed to 12

    printf("%d\n", p);  // address of a
    printf("%d\n", *p); //*p -value at the address pointed by p
    printf("%d\n", &a); //  the address of a

    int b = 20;
    *p = b;
    printf("%d\n", *p); //*p -value at the address pointed by p
}