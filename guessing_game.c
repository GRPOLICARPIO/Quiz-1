// Gabriel Policarpio
// Quiz 1 - CS 2600
//
// This is an interactive program/game that allows a user to guess a number
// between 1-10 with options to either play the game, change the max #, or quit

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

void choices ();

int main ()
{
    int max = 10;
    int choice = 0, inp, random, win = 0, guesses;
    while(choice != 3)
    {
        choices();
        scanf("%d", &choice);

        if(choice == 1)
        {
            guesses = 0;

            srand(time(0));
            random = (rand() %(max - 0 + 1)) + 0;

            while(random != inp)
            {
                printf("Guess the number between 0 to %d :", max);
                scanf("%d", &inp);

                if(inp > random)
                {
                    printf("Too high\n\n");
                }
                else if(inp < random)
                {
                    printf("Too low\n\n");
                }
                else if(inp == random)
                {
                    win = 1;
                    printf("You guessed correctly!\n\n");
                }
                else if(inp == 'q')
                {
                    choices();
                    scanf("%d", &choice);
                }
                guesses++;
            }
        }
        else if(choice == 2)
        {
            printf("New max number: ");
            scanf("%d", &max);

            while(max < 0)
            {
                printf("New max number: ");
                scanf("%d", &max);
            }
        }
        else if(choice == 3)
        {
            printf("\n");
            printf("Thank you for playing!\n");
            printf("Results: \n");

            if(win == 1)
            {
                printf("You won!\n");
                printf("Number of guesses you made: %d", guesses);
            } 
            else
            {
                printf("You lost\n");
            }
            return 0;
        }
    }
    return 0;
}

void choices ()
{
    printf("Press 1 to play the game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
}