//
// Created by lf843 on 12/12/2024.
//
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <unistd.h>
#include <windows.h>


#define CUSTOM_EXIT(message) do { printf("%s\n", message); exit(1); } while(0)

int myrandom(int max)
{
    int x;
    x = rand() % max;
    return x;
}

int main() {
    int balance, bet, guess, dice;
    int choice;

    srand(getpid());
    balance = 1000;

    while (1)
    {
        printf("Menu\n");
        printf("1. Bet\n");
        printf("2. Quit\n");
        printf("Chose an option: ");
        fflush(stdout);
        scanf("%d", &choice);

        if (choice == 2) {
            CUSTOM_EXIT("You decided to quit:");
        } else if (choice != 1)
        {
            printf("Try again!");
            continue;
        }
        printf("Make your bet, please:");
        fflush(stdout);
        scanf("%d", &bet);

        printf("Make your choice (1-6), zero means out:");
        scanf("%d", &guess);
        if (guess == 0)
        {
            CUSTOM_EXIT("You quit from the game betting nothing!");

        }
        printf("Throwing the dice...");
        sleep(2);
        dice = myrandom(6) +1;
        printf("Dice results: %d\n", dice);

        if (guess != dice)
        {
            balance -= bet;
            printf("Apparently, it's not your lucky day\n");

        } else
        {
            bet *= 3;
            balance += bet;
            printf("Today is your lucky day\n");
        }

        if (balance < 0 )
        {
            printf("You lost all your money, however you can keep bettin'");
        }
        printf("Balance: $%d\n", balance);
    }
}