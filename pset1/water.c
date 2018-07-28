#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Declaration of variables
    int minute;
    int bottles;
    
    // Input
    printf("minutes\n");
    minute = GetInt();
    
    // Condition for 1 minute
    if (minute == 1)
    {
        bottles = 12;
        printf("bottles:%d\n", bottles);
        
    }
    
        // Condition for 2 minute

    else if (minute == 2)
    {
        bottles = 24;
        printf("bottles:%d\n", bottles);
        
    }
    // Condition for 5 minute
    else if (minute == 5)
    {
        bottles = 60;
        printf("bottles:%d\n", bottles);
        
    }
    // Condition for 10 minute
    else if(minute == 10)
    {
        bottles = 120;
        printf("bottles:%d\n", bottles);
        
    }
}