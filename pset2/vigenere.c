#include <stdio.h> 
#include <string.h> 
#include <cs50.h> 
#include <ctype.h> 

char caesar(char token, int key);
 
int main(int argc, string argv[])
{
    // Declaration of Variables
    bool keyPass = false;
    string keyword = ""; 
    int keylength = 0; 
    string user_text = ""; 
    int text_length; 
    int key_count = 0;
    do
    {
        // Testing the number of command line argument.
        if (argc != 2)
        {
            printf("Invalid keywords.\n"); 
            return 1; 
        }
        else if (argv[1])
        {
            int length = strlen(argv[1]); 
            for (int i = 0; i < length; i++)
            {
                if (!isalpha(argv[1][i]))
                {
                    // Inputs must be letters only.  
                    printf("Input contain invalid characters.\n"); 
                    return 1; 
                }
                else 
                {
                    keyPass = true; 
                    keyword = argv[1]; 
                } 
            } 
        } 
    } while(!keyPass);
    /* Testing the length of keywords. 
    */
    keylength = strlen(keyword);
    int keycodes[keylength];
    
    
    // Converting the characters in the keywords to numbers 
    for(int i = 0; i < keylength;i++)
    {
        keycodes[i] = toupper(keyword[i]) - 65; 
    }
    
    
    // Read in user text and calculate its length. 
    user_text = GetString(); 
    text_length = strlen(user_text);
    
    for (int i = 0; i < text_length; i++)
    {
        if (!isalpha(user_text[i]))
        {
            printf("%c", user_text[i]); 
        }
        // Process input.
        else
        {
            printf("%c", caesar(user_text[i], keycodes[key_count]));
            
            
            // To increase the position counter.   
            if (key_count < keylength - 1)
            {
                key_count++; 
            }
            else
            {
                key_count = 0; 
            } 
        } 
    } 
 
 
    // Exit. 
    printf("\n"); 
    return 0;
    
}
/* This is a case-sensitive caeser cipher for a single
character using the supplied key. 
No input  testing is provided. 
*/
char caesar(char token, int key)
{
    if (islower(token))
    {
        return ((((token - 97) + key) % 26) + 97);
        
    }
    else 
    {
        return ((((token - 65) + key) % 26) + 65);
        
    } 
} 