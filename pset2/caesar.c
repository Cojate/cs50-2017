#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please enter exactly one commend-line argument");
        return 1;
    }
    
    // consider the input modulo 26
    int shift = atoi(argv[1]) % 26;
    
    // printf("The shift is %i", shift);
    
    // get plaintext from user
    printf("plaintext: ");
    string plaintext = get_string();
    int n = strlen(plaintext);
    
    // run the cipher
    int ciphertext[n];
    printf("ciphertext: ");
     
    for (int i = 0; i < n; i++)
    {
        if isupper(plaintext[i])
        {
            ciphertext[i] = ((( (int) plaintext[i] - 65) + shift) % 26) + 65;
        }
        else if islower(plaintext[i])
        {
            ciphertext[i] = ((( (int) plaintext[i] - 97) + shift) % 26) + 97;          
        } else 
        {
            ciphertext[i] = plaintext[i];
        }

        printf("%c", ciphertext[i]);
    }
    printf("\n");
}