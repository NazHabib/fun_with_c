#include <stdio.h>

int main() {
    char *answers[4][4] = {
        {"A-Blue", "B-Yellow", "C-Orange", "D-White"},
        {"A-Earth", "B-Mars", "C-Jupiter", "D-Pluto"},
        {"A-Pizza", "B-Kebab", "C-Batheekh", "D-Burgir"},
        {"A-Portugal", "B-Sweden", "C-Ireland", "D-Netherland"}
    };

    char *question[4] = {
        "1-What is Albert's favourite colour?",
        "2-What is Albert's favourite planet?",
        "3-What is Albert's favourite food?",
        "4-Where does Albert live?"
    };

    char answer[4] = {'A','C','D','A'};
    int right = 0;
    char ans = '\0';

    printf("This is the quiz game. Be ready.\n");
    for(int i = 0; i < 4; i++) {
        printf("%s\n", question[i]);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", answers[i][j]);
        }
        printf("What will be your answer? ");
        scanf(" %c", &ans);  // space before %c to skip whitespace
        if(ans == answer[i]) {
            right += 1;
        }
    }
    printf("You got %d questions right.\n", right);
    return 0;
}
