#include <stdio.h>
#include <cs50.h>

int main(void)
{
    printf("minutes: ");
    int time_in_shower = GetInt();
    int water_used = (192 * time_in_shower) / 16;
    printf("water: %i\n", water_used);
}