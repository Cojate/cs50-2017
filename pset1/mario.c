#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int height;
    
    do
    {
        printf("height: ");
        height = GetInt();
    }  
    while (height < 0 || height > 23);
    
    for (int i = 0; i < height; i++)
    {
        for (int j = 0; j < height + 1; j++)
        {
            if ( j < height - i - 1)
                printf(" ");
            else 
                printf("#");
        }
        printf("\n");
    }

}