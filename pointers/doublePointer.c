#include <stdio.h>
void main()
{
    // int a = 10;
    // int *p;
    // int **pp;                                 // stores the address of pointer p
    // p = &a;                                   // pointer p is pointing to the address of a
    // pp = &p;                                  // pointer pp is a double pointer pointing to the address of pointer p
    // printf("address of a: %x\n", p);          // Address of a will be printed
    // printf("address of p: %x\n", pp);         // Address of p will be printed
    // printf("value stored at p: %d\n", *p);    // value stoted at the address contained by p i.e. 10 will be printed
    // printf("value stored at pp: %d\n", **pp); // value stored at the address contained by the pointer stoyred at pp

    int a[10] = {100, 206, 300, 409, 509, 601};        // Line 1
    int *p[] = {a, a + 1, a + 2, a + 3, a + 4, a + 5}; // Line 2
    int **pp = p;                                      // Line 3
    pp++;                                              // Line 4
    printf("%d %d %d\n", pp - p, *pp - a, **pp);       // Line 5
    *pp++;                                             // Line 6
    printf("%d %d %d\n", pp - p, *pp - a, **pp);       // Line 7
    ++*pp;                                             // Line 8
    printf("%d %d %d\n", pp - p, *pp - a, **pp);       // Line 9
    ++**pp;                                            // Line 10
    printf("%d %d %d\n", pp - p, *pp - a, **pp);       // Line 11
}
