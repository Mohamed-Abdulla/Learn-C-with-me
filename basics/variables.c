#include <stdio.h>


int value=20;//global variable  
    extern int d=9;

void function1(){  
    int x=10;//local variable  
    static int y=10;//static variable  
    auto int c=5;


    x=x+1;  
    y=y+1;  
    printf("%d,%d",x,y);  

} 

int main(){

    int a=10,b=20;//declaring 2 variable of integer type  
    float f=20.8;  
    char c='A';  

    // printf("%d",value);
    function1();
    function1();
    function1();
}


 