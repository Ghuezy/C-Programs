#include <stdio.h>
#include <math.h>
#include <conio.h>

int main(){    
    
    int num,result=1;

    printf("Enter a number to be factorialed: ");
    scanf("%d",&num);
    
    for(int i=1;i<=num;i++){
        result = result * i;
    }

    printf("Result is %d \n",result);
    
    printf("Press any key to finish program.");
    getch();

}