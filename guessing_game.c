#include<stdio.h>

int main() {
    int secret_num = 7;
    int guessed_num;
    int guess_count = 3;
    printf("-----Welcome to The Guessing Game-----\n");
    printf("-----Guess the Secret Number to win!!-----\n");
    printf("You have %d Guesses left\n", guess_count);

    while(guessed_num != secret_num) {
        if(guess_count <= 0) {
            printf("You Lose!! Game Over");
            break;
        }
        printf("Your Guess: ");
        scanf("%d", &guessed_num);
        guess_count--;
    }

    if (guessed_num == secret_num) printf("You Win!!");



    return 0;
}