#include <stdio.h>

int main()  
{  
    //~signed int
    int b=6;  
    int c=-8;  
    printf("Value of b is:%d", b);  
    printf("\nValue of c is:%d",c);  

    //~unsigned int


    int d=6;  
    int e=-8;  
    printf("\nValue of d is:%d", d);  
    printf("\nValue of e is:%u",e);  


    //~octal
    int a=0100;  
    printf("\nOctal value of a is: %o", a);  
    printf("\nInteger value of a is: %d",a);  


    //~hexadecimal

    int y=0xA;  
    printf("\nHexadecimal value of y is: %x", y);  
    printf("\nHexadecimal value of y is: %X",y);  
    printf("\nInteger value of y is: %d",y);  

    //~float

    float k=3.4;  
    printf("\nFloating point value of k is: %f", k);  


    //~exponential

    float o=3;  
    printf("\nExponential value of o is: %E", o);  


    //~same precison float

    float v=3.8;  
    printf("\nFloat value of v is: %g", v);  

    //~address of hexadecimal form

    int i=5;  
    printf("\nAddress value of i in hexadecimal form is: %p", &i);  


    //~char
    char r='c';  
    printf("\nValue of r is: %c", r);


    //~space on screen

    int l=900;  
    printf("\n%8d", l);  
    printf("\n%-8d",l);  


    //~fill empty space with zeros
    int t=12;  
    printf("\n%08d", t);  

    return 0;  
}  