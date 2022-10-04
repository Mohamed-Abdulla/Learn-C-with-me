#include <stdio.h>

//~Pointer types,void pointer,pointer arithmetic

//.Pointer variable is strongly typed.
// int * -> int..

//~why strong types.
//~why not some generic types ? bcoz we use it to store address only right!!  because we also use it to derefernce

int main()
{
    int a = 1025;
    int *p;
    p = &a;
    printf("Size of the integer is %d", sizeof(int));
    printf("\nAddress = %d , value = %d", p, *p);
    printf("\nAddress = %d , value = %d", p + 1, *(p + 1));

    char *p0;
    p0 = (char *)p; // type casting - passing p address to p0 pointer

    printf("\nSize of the char is %d", sizeof(char));
    printf("\nAddress = %d , value = %d", p0, *p0); //~value is 1 here
    printf("\nAddress = %d , value = %d", p0 + 1, *(p0 + 1));

    //~ 1025 = 00000000 00000000 00000100 00000001
}