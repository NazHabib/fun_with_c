#include <stdio.h>

int main(){
    
    float num1 = 0.0;
    float num2 = 0.0;
    char operator = ' ';

    printf("Tell me a number");
    scanf("%f", &num1);
    printf("\nTell me another number");
    scanf("%f", &num2);

    printf("\nTell me a operator");
    scanf(" %c", &operator);

    float res = 0.0;

    switch(operator){
        case '+':
            res = num1 + num2;
            printf("\nThe result is %f", res);
            break;
        case '-':
            res = num1 - num2;
            printf("\nThe result is %f", res);
            break;
        case '*':
            res = num1 * num2;
            printf("\nThe result is %f", res);
            break;
        case '/':
            res = num1 / num2;
            printf("\nThe result is %f", res);
            break;
        default:
            printf("Please only enter a operator");
    }


    return 0;
}
