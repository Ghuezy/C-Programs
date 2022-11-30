#include <stdio.h>
#include <conio.h>

int main(){
    float num1,num2,result;
    char opt;
    
    printf("Enter the first number: ");
    scanf("%f",&num1);
    printf("Enter the operator: ");
    scanf("%s",&opt);
    printf("Enter the second number: ");
    scanf("%f",&num2);

    if(opt == '+'){
        result = num1 + num2;
        printf("Result is: %.2f", result);
    }
    else if (opt == '-')
    {
        result = num1 - num2;
        printf("Result is: %.2f", result);
    }
    else if (opt == '/')
    {
        if(opt == 0){
            printf("You can't enter 0,please enter an another number. ");
            scanf("%f",&num2);
            result = num1 / num2;
            printf("Result is: %.2f", result);
        }
        else{
            result = num1 / num2;
            printf("Result is: %.2f", result);
        }
    }
    else if (opt == '*')
    {
        result = num1 * num2;
        printf("Result is: %.2f", result);
    }

    printf("\nPress a key to exit.");
    getch();
    return 0;
}