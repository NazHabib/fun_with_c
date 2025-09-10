#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void checkBalance(float balance);
float deposit();
float withdraw(float balance);

int main(){

    float balance = 0;
    bool exit = false;
    int op = 0;

    while (exit == false){
        printf("welcome to the banc. How may we help you ?\n");
        printf("Select option for what you want to do :\n");
        printf("1- Check balance 2- deposit 3- withdraw 4- exit\n");
        scanf("%d", &op);
        if (op == 1){
            checkBalance(balance);
        }
        else if( op == 2){
            balance += deposit();
        }
        else if (op==3){
            balance -= withdraw(balance);
        }
        else{
            exit = true;
            printf("Thanks for using the bank.");
        }
    }


    return 0;
}

void checkBalance(float balance){
    printf("You're balance is %0.2f\n", balance);
}
float deposit(){
    printf("How much money you wanna deposit? \n");
    float money = 0.0;
    scanf("%f", &money);
    return money;
}

float withdraw(float balance){
    printf("How much money you wanna withdraw?\n");
    float money = 0.0;
    scanf("%f", &money);
    if ( money > balance){
        printf("You re balance is low.\n");
        return 0.0;
    }
    else{
        return money;
    }
    
}

