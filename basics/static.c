#include <stdio.h>

//~Static variable
//~A static variable is a variable that persists its value across the various function calls.


int func()  
{   
   static int count=0; // variable initialization  
    count++; // incrementing counter variable  
  
   return count; 
   
}

static void func1()  
{  
    printf("\nHello javaTpoint");  
}  

int main()  
{  

   static int hello = 2;

   printf("%d",func());  
   printf("\n%d",func());  
   printf("\n%d",func());  
   printf("\n%d",hello);


// func1();
 return 0;  
}  

  