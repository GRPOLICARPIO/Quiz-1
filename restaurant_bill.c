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
    srand(time(NULL));

    int meal = rand()% 4 + 1;
    double taxPercentage, tipPercentage;
    double mealCost, tax, tip, total;

    printf("Enter tax as percentage: ");
    scanf("%lf", &taxPercentage);

    printf("Enter tip as percentage: ");
    scanf("%lf", &tipPercentage);

    printf("\n");

    if(meal == 1)
    {
        printf("Meal Ordered: Salad\n");
        printf("\n");
        printf("Salad Cost        = $         9.95\n");
        mealCost = 9.95;
    }
    else if(meal == 2)
    {
        printf("Meal Ordered: Soup\n");
        printf("\n");
        printf("Soup Cost         = $         4.55\n");
        mealCost = 4.55;
    }
    else if(meal == 3)
    {
        printf("Meal Ordered: Sandwich\n");
        printf("\n");
        printf("Sandwich Cost     = $        13.25\n");
        mealCost = 13.25;
    }
    else
    {
        printf("Meal Ordered: Pizza\n");
        printf("\n");
        printf("Pizza Cost        = $        22.35\n");
        mealCost = 22.35;
    }

    tax = mealCost * taxPercentage / 100;
    tip = mealCost * tipPercentage / 100;

    total = mealCost + tax + tip;

    printf("Total Tax  (%.1lf%%) = $ %12.2lf\n",taxPercentage,tax);
    printf("Tip Amount (%.1lf%%) = $ %12.2lf\n",tipPercentage,tip);
    printf("------------------------------------\n");
    printf("Total Cost        = $ %12.2lf\n",total);
    printf("------------------------------------\n");

    return 0;
}