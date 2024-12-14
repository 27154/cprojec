//
// Created by lf843 on 12/12/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <windows.h>

int myrandom(int max) {
    int x;
    x = rand() % max - 1;
    return x;
}

    int main() {
    int balance, bet, guess, dice;

    srand(getpid());

    balance = 1000;
    while (1) {
        printf(" make your bet, please:");
        fflush(stdout);
        scanf("%d", &bet);

        printf("Make your guess (1-6), zero means quit");
        scanf("%d", &guess);
        if (guess == 0) {
            return 0;
        }
        printf("Throwing the dice...\n");
        sleep(2);
        dice = myrandom(6);
        printf(" Dice results: %d\n", dice);

        if ( guess != dice) {
            balance = balance - bet;
            printf("Mother Fortune is not at your back! Bet again!\n");

        } else   {
            bet *= 3;
            balance += bet;
            printf("It's your lucky day your son of a bitch!\n");
        }

        if (balance == 0) {
            printf("You lost all your money\n");
            return 0;
        }
        printf("Balance: $%d\n", balance);
    }
}