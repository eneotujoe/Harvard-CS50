#include <stdio.h> 
#include <cs50.h> 
#include <string.h> 
#include <ctype.h>
#include <stdlib.h> 

// Command line arguments
int main(int argc, string argv[])
{
    // Declaration of variables
    bool keyPass = false;
    int key = 0;
    int input_length = 0;
    string msg = "";
    // Prompt for key
    do
    {
                 // To warn about incorrect command line arguments.  
        if (argc != 2)
        {
            printf("Invalid encryption key.\n");
            return 1;
            
        }
        else
        {
            // Converts key from string to int
            key = atoi(argv[1]);
            keyPass = true;
            
        }
        
    }
    while (!keyPass);
    // To get input
    msg = GetString();
    input_length = strlen(msg);
    for(int i = 0; i < input_length; i++)
    {
        if (isalpha(msg[i]))
        {
            // Lower case characters
            if (islower(msg[i]))
            {
                printf("%c", ((((msg[i] - 97) + key) % 26) + 97));
                
            }
            // Converts to upper case characters
            else
            {
                printf("%c", ((((msg[i] - 65) + key) % 26) + 65));
                
            }
            
        }
        else
        {
            printf("%c", msg[i]);
            
        }
        
    }
    printf("\n");
    return 0;
    
} 
