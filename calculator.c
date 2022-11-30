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
        result = num1 / num2;
        printf("Result is: %.2f", result);
    }
    else if (opt == '*')
    {
        result = num1 * num2;
        printf("Result is: %.2f", result);
    }

    printf("Press a button to exit.");
    getch();
    return 0;
}