
/*

Bitwise Operator in C
The bitwise operators are the operators used to perform the operations on the data at the bit-level.
 When we perform the bitwise operations, then it is also known as bit-level programming. 
It consists of two digits, either 0 or 1. 
It is mainly used in numerical computations to make the calculations faster.

*/


#include <stdio.h>  
int main()  
{  
   int a=5, b=14;  // variable declarations  

   //~ AND -if any both 1 ans is 1, or 0
   printf("The output of the Bitwise AND operator a&b is %d",a&b);  

   //~ OR -if any one 1 ans is 1 ,or 0
   printf("The output of the Bitwise OR operator a|b is %d",a|b); 

   //~Ex-OR -if both same ans is 0 or 1
   printf("The output of the Bitwise exclusive OR operator a^b is %d",a^b);   

   //~Bitwise complement - one's complement operator ~

   printf("The output of the Bitwise complement operator ~a is %d",~a);  



   //~Left-shift operator
   printf("\nThe value of a<<2 is : %d ", a<<1);  

   //~Right-shift operator

    printf("The value of a>>2 is : %d ", a>>3);  

   return 0;  
}  