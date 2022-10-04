#include<stdio.h>    
#include<stdbool.h>    


int main(){    
    const float PI=3.14;    

    bool a= true;
    bool ab[2]={true,false};

    // if(a==true) // conditional statements  
    // {  
    // printf("The value of x is true");  
    // }  
    // else  
    // printf("The value of x is FALSE"); 

    // printf("The value of PI is: %f",PI);    

    for (int i = 0; i < 2; i++)
    {
        /* code */
        printf("%d,",ab[i]);
    }
    
    return 0;  
}   