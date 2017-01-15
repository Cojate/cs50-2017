#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void)
{
    int change;
    
    do
    {
        printf("O hai! How much change is owed? ");
        change = round(GetFloat()*100);

    } while (change < 0);

    int counter = 0;
    // printf("Starting change: %i cents \n", change);
    while (change / 25 >= 1)
    {
        change = change - 25;
        counter++;
    }
    // printf("After checking 25, counter %i and change %i\n", counter, change);
    while (change / 10 >= 1)
    {
        change = change - 10;
        counter++;
    }
    while (change / 5 >= 1)
    {
        change = change - 5;
        counter++;
    }
    while (change / 1 >= 1)
    {
        change = change - 0.01;
        counter++;
    }
    printf("%i\n", counter);
}