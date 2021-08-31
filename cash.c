//Program determine the smallest combination of coins to give as change

#include <cs50.h>
#include <stdio.h>
#include <math.h>

const float quarter = 25;
const float dime = 10;
const float nickel = 5;
const float penny = 1;

void printspace(int x); //function prototyping to be used to print blank spaces

int main(void)
{
    //Prompt user for change owed. Most be a positive float

    float owed = -1;
    while (owed < 0)
    {
        owed = get_float("Owed: ");
    }

    //Round cents into nearest pennies
    float cents = round(owed * 100);

    //Loop through to check if subtractable by quarters, dime, nikels, pennies

    int counter = 0;//Counter to accumulate number of substratables

    while (cents >= quarter)
    {
        cents = cents - quarter;
        counter++;//Accumulate number of eash subtratables
    }

    while (cents >= dime)
    {
        cents = cents - dime;
        counter++;//Accumulate number of eash subtratables
    }

    while (cents >= nickel)
    {
        cents = cents - nickel;
        counter++;//Accumulate number of eash subtratables
    }

    while (cents >= penny)
    {
        cents = cents - penny;
        counter++; //Accumulate number of eash subtratables
    }

    //Accumulate number of eash subtratables

    //Return the accumulates and print out the least combinations of coins

    printspace(30);
    printf("\n\n");
    printf(" Number of coins are: %i  ", counter);
    printf("\n\n");
    printspace(30);
    printf("\n");

}

//function for printing blank spaces
void printspace(int x)
{
    for (int k = 1; k <= x; k++)
    {
        printf("#");
    }
}
