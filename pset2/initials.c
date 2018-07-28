#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
int main(void)
{
    // To enter your name
    string name = GetString();
     // To convert to uppercase and print the first initial
    printf("%c", toupper(name[0]));
    // Reject non charater
    if (name != NULL)         
    {

        for(int i = 0; i < strlen(name);i++)
        {
            // Test for blank or space
            if (isblank(name[i]))
            {
                printf("%c", toupper(name[i + 1]));
            }
      }
    }
    printf("\n");
}