#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // Declaration of variable
    int height;
   // Prompting loop
    do
    {
        printf("choose number from 1 to 23\n");
        height = GetInt();
    }
    while( height < 0 || height > 23);
    for(int row = 0; row < height; row++)
    {   
        // Creation of space
        for(int space = height - row - 1; space > 0; space--)
        {
            printf(" ");
            
        }
         // Ceation of block
        for(int block = 0; block < row + 2; block++)
        {
            printf("#");
            
        }
        printf("\n");
        
    }
   
  
 }