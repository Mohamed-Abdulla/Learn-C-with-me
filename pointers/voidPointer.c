// #include <stdio.h>
// int main()
// {
//     void *ptr = NULL; // void pointer
//     int *p = NULL;    // integer pointer
//     char *cp = NULL;  // character pointer
//     float *fp = NULL; // float pointer
//     // size of void pointer
//     printf("size of void pointer = %d\n\n", sizeof(ptr));
//     // size of integer pointer
//     printf("size of integer pointer = %d\n\n", sizeof(p));
//     // size of character pointer
//     printf("size of character pointer = %d\n\n", sizeof(cp));
//     // size of float pointer
//     printf("size of float pointer = %d\n\n", sizeof(fp));
//     return 0;
// }

//*The void pointer in C cannot be dereferenced directly.

// #include <stdio.h>
// int main()
// {
//    int a=90;
//    void *ptr;
//    ptr=&a;
//    printf("Value which is pointed by ptr pointer : %d",*(int*)ptr);
//     return 0;
// }

// In the above code, we typecast the void pointer to the integer pointer by using the statement given below:

//(int*)ptr

//~Why we use void pointers?
// We use void pointers because of its reusability. Void pointers can store the object of any type,
// and we can retrieve the object of any type by using the indirection operator with proper typecasting.

#include <stdio.h>
int main()
{
    int a = 56;    // initialization of a integer variable 'a'.
    float b = 4.5; // initialization of a float variable 'b'.
    char c = 'k';  // initialization of a char variable 'c'.
    void *ptr;     // declaration of void pointer.
    // assigning the address of variable 'a'.
    ptr = &a;
    printf("value of 'a' is : %d", *((int *)ptr));
    // assigning the address of variable 'b'.
    ptr = &b;
    printf("\nvalue of 'b' is : %f", *((float *)ptr));
    // assigning the address of variable 'c'.
    ptr = &c;
    printf("\nvalue of 'c' is : %c", *((char *)ptr));
    return 0;
}