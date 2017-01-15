#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
    // User inputs name
    string name = get_string();
    
     printf("%c", toupper(name[0]));
    
    // iterate over letters in name
    for (int i = 1, n = strlen(name); i < n; i ++)
    {
        if (name[i] == ' ')
        {
            printf("%c", toupper(name[i + 1]));
        }
        
    }
    printf("\n");
}