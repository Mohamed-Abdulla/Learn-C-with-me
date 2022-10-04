#include <stdio.h>  
int main()  
{  
    // int a=2;  
    // int b=2/0;  
    // printf("The value of b is : %d", b);  

    //~logical errors

    // int sum=0; // variable initialization  
    // int k=1;  
    // for(int i=1;i<=10;i++); // logical error, as we put the semicolon after loop  
    // {  
    // sum=sum+k;  
    // k++;  
    // }  
    // printf("The  value of sum is %d", sum);  


    int a,b,c;  
    a=2;  
    b=3;  
    c=1;  
    // a+b=c; // semantic error 
    c=a+b;
    printf("%d",c);

    return 0;  
} 