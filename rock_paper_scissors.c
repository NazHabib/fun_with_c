#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(){

    printf("Welcome to Rock Paper Scissors!");

    bool win = false;
    
    srand(time(NULL));

    int min = 1;

    int max = 3;

    int myChoice = 0;

    int enemyChoice = 0;

    while ( win == false){
        enemyChoice = (rand() % (max - min + 1)) + min;
        printf("\nSelect 1.Rock 2.Paper 3.Scissors");
        scanf("%d", &myChoice);

        if (enemyChoice == 2 && myChoice == 1){
            printf("\nyou lose!");
        }
        else if (enemyChoice == 3 && myChoice == 2){
            printf("\nYou lose.");
        }
        else if (enemyChoice == 1 && myChoice == 3){
            printf("\nyou lose...");
        }
        else if (enemyChoice == myChoice){
            printf("\nYOu draw");
        }
        else{
            printf("\nYOu win.");
            win = true;
        }
    }


	return 0;
}