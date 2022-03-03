// Gabriel Policarpio
// Quiz 1 - CS 2600
//
// This is an interactive program/game that allows a user to guess a number
// between 1-10 with options to either play the game, change the max #, or quit

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

// List of choices listed in this void function called after main
void choices ();

int main ()
{
    int max = 10, choice = 0, inp, random, win = 0, guesses;

    while(choice != 3)
    {
        choices();
        scanf("%d", &choice);

        // Prompts user to guess the number and gives them as many tries as possible
        // also gives them hints i.e. too high/too low
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
                else if(inp == 'q') // If user inputs q and decides to quit midgame
                {
                    choices();
                    scanf("%d", &choice);
                }
                guesses++; // Tracks the number of guesses the user inputs
            }
        }
        else if(choice == 2) // Allows the user to change the max number as they please
        {
            printf("New max number: ");
            scanf("%d", &max);

            while(max < 0)
            {
                printf("New max number: ");
                scanf("%d", &max);
            }
        }
        else if(choice == 3) // Quit option of the game
        {
            printf("\n");
            printf("Thank you for playing!\n");
            printf("Results: \n");

            if(win == 1) // End message, showing the game results
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

// The list of choices available at the start of the game (main menu)
void choices ()
{
    printf("Press 1 to play the game\n");
    printf("Press 2 to change the max number\n");
    printf("Press 3 to quit\n");
}