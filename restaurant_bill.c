// Gabriel Policarpio
// Quiz 1 - CS 2600
//
// This program computes the tax an tip on a restaurant bill for a patron
// with tac and tip both as percentages, outputting the total meal cost
// chosen at random between four different meals

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main ()
{
    // Picks randomly between 4 different meals
    srand(time(NULL));

    int meal = rand()% 4 + 1;
    double taxPercentage, tipPercentage;
    double mealCost, tax, tip, total;

    // Asks user for input regarding tax and tip value in %
    printf("Enter tax as percentage: ");
    scanf("%lf", &taxPercentage);

    printf("Enter tip as percentage: ");
    scanf("%lf", &tipPercentage);

    printf("\n");

    // If else statements that goes through all possible meal options and randomly
    // picks between them and also states each meal's cost
    if(meal == 1)
    {
        printf("Meal Ordered: Salad\n");
        printf("\n");
        printf("Salad Cost           = $         9.95\n");
        mealCost = 9.95;
    }
    else if(meal == 2)
    {
        printf("Meal Ordered: Soup\n");
        printf("\n");
        printf("Soup Cost            = $         4.55\n");
        mealCost = 4.55;
    }
    else if(meal == 3)
    {
        printf("Meal Ordered: Sandwich\n");
        printf("\n");
        printf("Sandwich Cost        = $        13.25\n");
        mealCost = 13.25;
    }
    else
    {
        printf("Meal Ordered: Pizza\n");
        printf("\n");
        printf("Pizza Cost           = $        22.35\n");
        mealCost = 22.35;
    }

    // Equations that calculate both tax and tip costs and adds the total
    tax = mealCost * taxPercentage / 100;
    tip = mealCost * tipPercentage / 100;

    total = mealCost + tax + tip;

    // Prints out a sumation of all the costs in an orderly format
    printf("Total Tax  (%.1lf%%)   = $ %12.2lf\n",taxPercentage,tax);
    printf("Tip Amount (%.1lf%%)   = $ %12.2lf\n",tipPercentage,tip);
    printf("-------------------------------------\n");
    printf("Total Cost           = $ %12.2lf\n",total);
    printf("-------------------------------------\n");

    return 0;
}