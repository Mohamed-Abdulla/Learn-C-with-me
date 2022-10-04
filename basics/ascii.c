#include <stdio.h> 

int main()  
{  
    char ch;    // variable declaration  
    // printf("Enter a character");  
    // scanf("%c",&ch);  // user input  
    // printf("\n The ascii value of the ch variable is : %d", ch);  

    //~print all ascii values



    int k;   // variable declaration   
    // for(int k=0;k<=255;k++)  // for loop from 0-255  
    // {  
    //     printf("\nThe ascii value of %c is %d", k,k);  
    // }  


    //~print ascii values of name

    int sum=0;
    int i=0; 
    char name[20];

    printf("\nEnter your name :" );
    scanf("%s",name);

    printf("\n%s",name);


    while(name[i] != '\0'){

        printf("\nThe ascii value of the character %c is %d", name[i],name[i]);  

        sum=sum+name[i];  
        i++;
    }
     printf("\nSum of the ascii value of a string is : %d", sum);  


    return 0;  
} 