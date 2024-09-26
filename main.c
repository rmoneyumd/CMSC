/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    float first_number, second_number, result;
    char operation;
    
    
    printf("Please enter a number: ");
    scanf(" %f", &first_number);
    
    printf("Please enter an operation: ");
    scanf(" %c", &operation);
    
    printf("Please enter a number: ");
    scanf(" %f", &second_number);

    if(operation == '+'){
        result = first_number + second_number;
        
    }
    else if(operation == '-'){
        result = first_number - second_number;
        
    }
    else if(operation == '*'){
        result = first_number * second_number;
        
    }
    else{
        if(operation == '/'){
            if(second_number != 0){
            result = first_number / second_number;
            }else{
            printf("Cannot divide by 0");
            }
        }
    }
    printf("Your result is: %f", result);
    

    return 0;
}