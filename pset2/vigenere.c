#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Please enter exactly one keyword.");
        return 1;
    }
    
    // get and ceck key
    string key = argv[1];
    int key_len = strlen(key);
    int key_index = 0;
    
    int shifts[key_len];
    
    for (int i = 0; i < key_len; i++)
    {
        if (isalpha(key[i]) == 0)
        {
            printf("Keywork must contain only letters");
            return 1;
        }
        shifts[i] = (int) tolower(key[i]) - 97;
    }
    
    // get plaintext
    printf("plaintext: ");
    string message = get_string();
    int plain_len = strlen(message);
    
    // convert plaintext to ciphertext
    
    for (int i = 0; i < plain_len; i++)
    {
        if isupper(message[i])
        {
            message[i] = (((( message[i] - 'A') + shifts[key_index]) % 26) + 'A');
            key_index = (key_index + 1) % key_len;
        } 
        else if islower(message[i])
        {
            message[i] = (((( message[i] - 'a') + shifts[key_index]) % 26) + 'a');
            key_index = (key_index + 1) % key_len;
        }
        else
        {
            message[i] = message[i];
        }
    }
    printf("%s", message);
}